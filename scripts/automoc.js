const path = require("path");
const fs = require("fs");
const process = require("child_process");

const parseMocGypi = () => {
  const MOC_GYPI_PATH = path.resolve(__dirname, "../config/moc.gypi");
  const fileText = fs.readFileSync(MOC_GYPI_PATH);
  return JSON.parse(fileText);
};

const main = () => {
  const includeFilePath = path.resolve(
    __dirname,
    "../src/cpp/core/YogaWidget/yogawidget.h"
  );
  const config = parseMocGypi();
  const mocFiles = config["target_defaults"]["sources"];
  mocFiles.forEach(eachMocFilePath => {
    const parsed = path.parse(eachMocFilePath);
    const possibleOriginalHeaderFile = path.format({
      ...parsed,
      name: parsed.name.replace("_moc", ""),
      ext: ".h",
      base: undefined
    });
    const infile = path.resolve(__dirname, possibleOriginalHeaderFile);
    const outfile = path.resolve(__dirname, eachMocFilePath);
    const command = `moc ${infile} -o ${outfile} --include ${includeFilePath}`;
    console.log(command);
    process.exec(command, (error, stdout, stderr) => {
      if (error) {
        console.error(`exec error: ${error}`);
        return;
      }
    });
  });
};

main();
