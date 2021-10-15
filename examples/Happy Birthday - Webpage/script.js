class Test {
  constructor(param = {}) {
    this.timestamp        = null;
    this.duration         = param.duration || Test.CONST.DURATION;
    this.progress         = 0;
    this.delta            = 0;
    this.progress         = 0;
    this.isLoop           = !!param.isLoop;

    this.reset();
  }

  static get CONST() {
    return {
      DURATION : 1000
    };
  }

  reset() {
    this.timestamp = null;
  }

  start(now) {
    this.timestamp = now;
  }

  tick(now) {
    if (this.timestamp) {
      this.delta    = now - this.timestamp;
      this.progress = Math.min(this.delta / this.duration, 1);

      if (this.progress >= 1 && this.isLoop) {
        this.start(now);
      }

      return this.progress;
    } else {
      return 0;
    }
  }
}

class Confetti {
  constructor(param) {
    this.parent         = param.elm || document.body;
    this.canvas         = document.createElement("canvas");
    this.ctx            = this.canvas.getContext("2d");
    this.width          = param.width  || this.parent.offsetWidth;
    this.height         = param.height || this.parent.offsetHeight;
    this.length         = param.length || Confetti.CONST.PAPER_LENGTH;
    this.yRange         = param.yRange || this.height * 2;
    this.progress       = new Test({
      duration : param.duration,
      isLoop   : true
    });
    this.rotationRange  = typeof param.rotationLength === "number" ? param.rotationRange
                                                                   : 10;
    this.speedRange     = typeof param.speedRange     === "number" ? param.speedRange
                                                                   : 10;
    this.sprites        = [];

    this.canvas.style.cssText = [
      "display: block",
      "position: absolute",
      "top: 0",
      "left: 0",
      "pointer-events: none"
    ].join(";");

    this.render = this.render.bind(this);

    this.build();

    this.parent.appendChild(this.canvas);
    this.progress.start(performance.now());

    requestAnimationFrame(this.render);
  }

  static get CONST() {
    return {
        SPRITE_WIDTH  : 9,
        SPRITE_HEIGHT : 16,
        PAPER_LENGTH  : 100,
        DURATION      : 8000,
        ROTATION_RATE : 50,
        COLORS        : [
          "#EF5350",
          "#EC407A",
          "#AB47BC",
          "#7E57C2",
          "#5C6BC0",
          "#42A5F5",
          "#29B6F6",
          "#26C6DA",
          "#26A69A",
          "#66BB6A",
          "#9CCC65",
          "#D4E157",
          "#FFEE58",
          "#FFCA28",
          "#FFA726",
          "#FF7043",
          "#8D6E63",
          "#BDBDBD",
          "#78909C"
        ]
    };
  }

  build() {
    for (let i = 0; i < this.length; ++i) {
      let canvas = document.createElement("canvas"),
          ctx    = canvas.getContext("2d");

      canvas.width  = Confetti.CONST.SPRITE_WIDTH;
      canvas.height = Confetti.CONST.SPRITE_HEIGHT;

      canvas.position = {
        initX : Math.random() * this.width,
        initY : -canvas.height - Math.random() * this.yRange
      };

      canvas.rotation = (this.rotationRange / 2) - Math.random() * this.rotationRange;
      canvas.speed    = (this.speedRange / 2) + Math.random() * (this.speedRange / 2);

      ctx.save();
        ctx.fillStyle = Confetti.CONST.COLORS[(Math.random() * Confetti.CONST.COLORS.length) | 0];
        ctx.fillRect(0, 0, canvas.width, canvas.height);
      ctx.restore();

      this.sprites.push(canvas);
    }
  }

  render(now) {
    let progress = this.progress.tick(now);

    this.canvas.width  = this.width;
    this.canvas.height = this.height;

    for (let i = 0; i < this.length; ++i) {
      this.ctx.save();
        this.ctx.translate(
          this.sprites[i].position.initX + this.sprites[i].rotation * Confetti.CONST.ROTATION_RATE * progress,
          this.sprites[i].position.initY + progress * (this.height + this.yRange)
        );
        this.ctx.rotate(this.sprites[i].rotation);
        this.ctx.drawImage(
          this.sprites[i],
          -Confetti.CONST.SPRITE_WIDTH * Math.abs(Math.sin(progress * Math.PI * 2 * this.sprites[i].speed)) / 2,
          -Confetti.CONST.SPRITE_HEIGHT / 2,
          Confetti.CONST.SPRITE_WIDTH * Math.abs(Math.sin(progress * Math.PI * 2 * this.sprites[i].speed)),
          Confetti.CONST.SPRITE_HEIGHT
        );
      this.ctx.restore();
    }

    requestAnimationFrame(this.render);
  }
}

(() => {
  const DURATION = 8000,
        LENGTH   = 120;

  new Confetti({
    width    : window.innerWidth,
    height   : window.innerHeight,
    length   : LENGTH,
    duration : DURATION
  });

  setTimeout(() => {
    new Confetti({
      width    : window.innerWidth,
      height   : window.innerHeight,
      length   : LENGTH,
      duration : DURATION
    });
  }, DURATION / 2);
})();