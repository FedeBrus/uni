package data;

public class WaterBlock extends AbstractBlock {
    public WaterBlock() {
        super("WaterBlock", '~', true, true);
    }

    @Override
    public int blockId() {
        return 2;
    }
}
