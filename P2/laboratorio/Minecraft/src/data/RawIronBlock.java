package data;

public class RawIronBlock extends AbstractSolidBlock implements SmeltableBlock {
    public RawIronBlock() {
        super("RawIronBlock", 'I');
    }

    public Block smelt() {
        return new IronBlock();
    }

    @Override
    public int blockId() {
        return 5;
    }
}
