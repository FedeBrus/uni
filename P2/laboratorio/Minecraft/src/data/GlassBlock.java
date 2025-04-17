package data;

public class GlassBlock extends AbstractSolidBlock {
    public GlassBlock() {
        super("GlassBlock", 'G');
    }

    @Override
    public int blockId() {
        return 4;
    }
}
