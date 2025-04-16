package data;

public class SandBlock extends AbstractBlock implements SmeltableBlock {
    public SandBlock() {
        super("SandBlock", 'S', true, false);
        pickable = true;
    }

    public Block smelt() {
        return new GlassBlock();
    }
}
