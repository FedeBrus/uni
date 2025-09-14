package data;

import java.util.Random;

public class BlockFactory {
    public static Block randomBlock(int[] blockIdPool) {
        Random rnd = new Random();
        return fromId(blockIdPool[rnd.nextInt(blockIdPool.length)]);
    }

    private static Block fromId(int id) {
        return switch (id) {
            case 1 -> new AirBlock();
            case 2 -> new WaterBlock();
            case 3 -> new SandBlock();
            case 4 -> new GlassBlock();
            case 5 -> new RawIronBlock();
            case 7 -> new TorchBlock();
            default -> new NullBlock();
        };
    }
}
