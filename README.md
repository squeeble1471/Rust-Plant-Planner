# Rust-Plant-Planner
Tool for planning out God Clones in Rust, importing a list of pre-established plant seeds.


The goal of this tool is to obtain plant clones in a configuration of 3xG and 3xY in a 6-genome long string, in the game Rust.

  Plants in Rust have a genome of six char, no more and no less. While the position of the genome isn't a factor for the final product, it is a factor for crossbreeding the plants. For example, a plant of XXGXXY will produce the same result as GXXYXX when farmed, but when crossbreed, the genomes may cross to GXGYXY. Ultimately, we need GGGYYY in any sequence.

    Genes include -
    Positive Genes - 
      Y - Yield, how much a plant will produce.
      G - Growth rate, the speed it will reach maturity.
    Negative Genes -
    W - Water, how much water the plant requires to grow.
    H - Hardiness, plant resilience. Technically positive, but useless to final product. 
    X - Empty slot, provides no positive or negative. Ultimately, negative to final product.


This program will import a plants.txt file, parse the genomes line by line. It will then calculate if a God Clone is possible given the starting genes, and what genes are required if not possible. 

Eventually, it will do multiple plants per run (wheat, corn, berries, etc) rather than needing to be rerun for each.

Format of the plants.txt file will be as follows

[plant1] -
[genome1]
[genome2]
[...]

[plant2] -
[genome1]


It will then provide a results.txt, which will say if plant1 can achieved God Clone, plant2, etc, and what is missing.

I will need to research and document crossbreeding, as some genes have dominance over others when crossbreeding.

