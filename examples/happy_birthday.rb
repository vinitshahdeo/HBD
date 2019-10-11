class Card
  attr_accessor :event, :person

  def initialize(event, person)    
    @event = event
    @person = person
  end

  def message
    "Happy #{event} to #{person}!"
  end
end

card = Card.new('birthday', 'Mario')
puts card.message
