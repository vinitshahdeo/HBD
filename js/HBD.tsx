import React from "react";

type Props = {
  name: string;
};

const HBD: React.FC<Props> = ({name}) => <p>Happy Birthday, {name}!</p>;

export default HBD;
