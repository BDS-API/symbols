#ifndef BDS_SYMBOLS__BLOCKLEGACY_H
#define BDS_SYMBOLS__BLOCKLEGACY_H

#include <memory>
#include <functional>
#include "../Material.h"
#include "../item/ItemState.h"
#include "../block/Block.h"
#include "../util/BlockPos.h"
#include "BlockSource.h"
#include "../util/Random.h"
#include "../item/ItemInstance.h"
#include "../util/AABB.h"
#include "BlockProperty.h"
#include "BlockSupportType.h"
#include "../util/Brightness.h"
#include "../util/Color.h"
#include "BlockDefinition.h"

class BlockLegacy {

public:
    static int SIZE_OFFSET;

    static bool mLevelIsExperimental;


    void operator==(BlockLegacy const &) const;

    void operator!=(BlockLegacy const &) const;

    void getBlockID(void) const;

    void getNumPermutations(void) const;

    bool hasState(ItemState const &) const;

    bool isDoor(void) const;

    void matchesStates(BlockLegacy const &) const;

    bool isMobPiece(void) const;

    bool canBeExtraBlock(void) const;

    bool canPropagateBrightness(void) const;

    void setLevelExperimental(bool);

    void liquidCanFlowIntoFromDirection(unsigned char, std::function<Block const &()(BlockPos const &)> const &,
                                        BlockPos const &) const;

    void getLightEmission(Block const &) const;

    void shouldRandomTick(void) const;

    bool hasVariableLighting(void) const;

    bool isValidAuxValue(int) const;

    bool canFillAtPos(BlockSource &, BlockPos const &, Block const &) const;

    void sanitizeFillBlock(BlockSource &, BlockPos const &, Block const &) const;

    void onFillBlock(BlockSource &, BlockPos const &, Block const &) const;

    void shouldConnectToRedstone(BlockSource &, BlockPos const &, int) const;

    void handleRain(BlockSource &, BlockPos const &, float) const;

    void onMove(BlockSource &, BlockPos const &, BlockPos const &) const;

    void detachesOnPistonMove(BlockSource &, BlockPos const &) const;

    void getRedstoneProperty(BlockSource &, BlockPos const &) const;

    void tryLegacyUpgrade(unsigned short) const;

    void waterSpreadCausesSpawn(void) const;

    void onRedstoneUpdate(BlockSource &, BlockPos const &, int, bool) const;

    void setupRedstoneComponent(BlockSource &, BlockPos const &) const;

    void shouldRandomTickExtraLayer(void) const;

    bool canBeBrokenFromFalling(void) const;

    void createBlockPermutations(unsigned int);

    void createWeakPtr(void);

    void setDefaultState(Block const &);

    BlockLegacy(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, int,
                Material const &);

    void setSolid(bool);

    ~BlockLegacy();

    bool canSlide(BlockSource &, BlockPos const &) const;

    bool canInstatick(void) const;

    void getCreativeCategory(void) const;

    void getGravity(void) const;

    void getMaterial(void) const;

    void getMapColor(BlockSource &, BlockPos const &) const;

    void getMapColor(void) const;

    void getFriction(void) const;

    void getDestroySpeed(void) const;

    void tick(BlockSource &, BlockPos const &, Random &) const;

    void tryGetStateFromLegacyData(unsigned short) const;

    void getStateFromLegacyData(unsigned short) const;

    void getDefaultState(void) const;

    void animateTick(BlockSource &, BlockPos const &, Random &) const;

    void setLightEmission(float);

    void init(void);

    void clip(BlockSource &, BlockPos const &, Vec3 const &, Vec3 const &, bool, AABB const &) const;

    void clip(BlockSource &, BlockPos const &, Vec3 const &, Vec3 const &, bool) const;

    void spawnResources(BlockSource &, BlockPos const &, float, int) const;

    void spawnResources(BlockSource &, BlockPos const &, Block const &, float, int) const;

    void popResource(BlockSource &, BlockPos const &, ItemInstance const &) const;

    void spawnBurnResources(BlockSource &, float, float, float) const;

    void destroy(BlockSource &, BlockPos const &, Block const &, Actor *) const;

    void playerWillDestroy(Player &, BlockPos const &, Block const &) const;

    void getIgnoresDestroyPermissions(Actor &, BlockPos const &) const;

    void randomlyModifyPosition(BlockPos const &, int &) const;

    void randomlyModifyPosition(BlockPos const &) const;

    void addCollisionShapes(Block const &, BlockSource &, BlockPos const &, AABB const *,
                            std::vector<AABB, std::allocator<AABB>> &, Actor *) const;

    void addAABB(AABB const &, AABB const *, std::vector<AABB, std::allocator<AABB>> &) const;

    void addAABBs(Block const &, BlockSource &, BlockPos const &, AABB const *,
                  std::vector<AABB, std::allocator<AABB>> &) const;

    bool isSolid(void) const;

    void pushesOutItems(void) const;

    void setPushesOutItems(bool);

    void ignoreBlockForInsideCubeRenderer(void) const;

    void setIgnoreBlockForInsideCubeRenderer(bool);

    bool isUnbreakable(void) const;

    bool isHeavy(void) const;

    bool isStrippable(Block const &) const;

    void getStrippedBlock(Block const &) const;

    bool canProvideSupport(Block const &, unsigned char, BlockSupportType) const;

    bool hasProperty(BlockProperty) const;

    bool canConnect(Block const &, unsigned char, Block const &) const;

    void getConnectedDirections(Block const &, BlockPos const &, BlockSource &, bool &, bool &, bool &, bool &) const;

    void getAABB(BlockSource &, BlockPos const &, Block const &, AABB &, bool) const;

    void getOutline(BlockSource &, BlockPos const &, AABB &) const;

    void getLiquidClipVolume(BlockSource &, BlockPos const &, AABB &) const;

    void onProjectileHit(BlockSource &, BlockPos const &, Actor const &) const;

    void mayPick(void) const;

    void mayPick(BlockSource &, Block const &, bool) const;

    void getResourceCount(Random &, Block const &, int) const;

    void asItemInstance(BlockSource &, BlockPos const &, Block const &) const;

    void getResourceItem(Random &, Block const &, int) const;

    void getExplosionResistance(Actor *) const;

    bool isInteraction(void) const;

    void setIsInteraction(bool);

    void use(Player &, BlockPos const &) const;

    void getPlacementBlock(Actor &, BlockPos const &, unsigned char, Vec3 const &, int) const;

    void calcVariant(BlockSource &, BlockPos const &) const;

    bool isAttachedTo(BlockSource &, BlockPos const &, BlockPos &) const;

    void attack(Player *, BlockPos const &) const;

    void handleEntityInside(BlockSource &, BlockPos const &, Actor *, Vec3 &) const;

    bool isAuxValueRelevantForPicking(void) const;

    void getColor(Block const &) const;

    void getColor(BlockSource &, BlockPos const &, Block const &) const;

    void getColorAtPos(BlockSource &, BlockPos const &) const;

    void getColorForParticle(BlockSource &, BlockPos const &, Block const &) const;

    bool isSeasonTinted(Block const &, BlockSource &, BlockPos const &) const;

    bool isSignalSource(void) const;

    bool canBeOriginalSurface(void) const;

    void getDirectSignal(BlockSource &, BlockPos const &, int) const;

    bool canContainLiquid(void) const;

    void entityInside(BlockSource &, BlockPos const &, Actor &) const;

    void playerDestroy(Player &, BlockPos const &, Block const &) const;

    void getSilkTouchItemInstance(Block const &) const;

    bool canSurvive(BlockSource &, BlockPos const &) const;

    void getExperienceDrop(Random &) const;

    bool canBeBuiltOver(BlockSource &, BlockPos const &) const;

    void setNameId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const &);

    void triggerEvent(BlockSource &, BlockPos const &, int, int) const;

    void executeEvent(BlockSource &, BlockPos const &, Block const &,
                      std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const &) const;

    bool hasTag(BlockSource &, BlockPos const &, Block const &,
                std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const &) const;

    void setLightBlock(Brightness);

    void setExplodeable(float);

    void setDestroyTime(float);

    void setFriction(float);

    void addBlockProperty(BlockProperty);

    void setBlockProperty(BlockProperty);

    void setFlammable(int, int) const;

    void setRandomTicking(bool) const;

    void setRandomTickingExtraLayer(bool) const;

    void setMapColor(Color const &);

    void addProperty(BlockProperty);

    void addState(ItemState const &);

    void addState(ItemState const &, unsigned long);

    void setAllowsRunes(bool);

    void setExperimental(void);

    void setCanBeExtraBlock(bool);

    void setCanPropagateBrightness(bool);

    void getExperimental(void) const;

    bool canBeUsedInCommands(bool) const;

    void getAllowsRunes(void) const;

    void getVariant(Block const &) const;

    bool canSpawnOn(void) const;

    void telemetryVariant(BlockSource &, BlockPos const &) const;

    void getMappedFace(unsigned char, Block const &) const;

    void getFaceFlip(unsigned char, Block const &) const;

    void setVisualShape(Vec3 const &, Vec3 const &);

    void setVisualShape(AABB const &);

    void mayPlaceOn(BlockSource &, BlockPos const &) const;

    void mayPlace(BlockSource &, BlockPos const &) const;

    void mayPlace(BlockSource &, BlockPos const &, unsigned char) const;

    void tryToPlace(BlockSource &, BlockPos const &, Block const &, ActorBlockSyncMessage const *) const;

    void breaksFallingBlocks(Block const &) const;

    void setCategory(CreativeItemCategory);

    void neighborChanged(BlockSource &, BlockPos const &, BlockPos const &) const;

    void getSecondPart(BlockSource &, BlockPos const &, BlockPos &) const;

    void onGraphicsModeChanged(bool, bool, bool);

    void DEPRECATEDcallOnGraphicsModeChanged(bool, bool, bool);

    void checkIsPathable(Actor &, BlockPos const &, BlockPos const &) const;

    void shouldDispense(BlockSource &, Container &) const;

    void dispense(BlockSource &, Container &, int, Vec3 const &, unsigned char) const;

    void onPlace(BlockSource &, BlockPos const &) const;

    void onRemove(BlockSource &, BlockPos const &) const;

    void onExploded(BlockSource &, BlockPos const &, Actor *) const;

    void onStepOn(Actor &, BlockPos const &) const;

    void onFallOn(BlockSource &, BlockPos const &, Actor *, float) const;

    void transformOnFall(BlockSource &, BlockPos const &, Actor *, float) const;

    void movedByPiston(BlockSource &, BlockPos const &) const;

    void updateEntityAfterFallOn(Actor &) const;

    bool isBounceBlock(void) const;

    bool isVanilla(void) const;

    void setIsVanillaBlock(bool);

    void ignoreEntitiesOnPistonMove(Block const &) const;

    void onFertilized(BlockSource &, BlockPos const &, Actor *, FertilizerType) const;

    void mayConsumeFertilizer(BlockSource &) const;

    void getIconYOffset(void) const;

    bool canBeSilkTouched(void) const;

    void getMobToSpawn(SpawnConditions const &, BlockSource &) const;

    void getBlockItemId(void) const;

    bool isAlphaTested(void) const;

    bool isSolidBlockingBlock(void) const;

    bool isMotionBlockingBlock(void) const;

    bool isEmpty(void) const;

    bool isCropBlock(void) const;

    bool isStemBlock(void) const;

    bool isContainerBlock(void) const;

    bool isCraftingBlock(void) const;

    bool isInteractiveBlock(void) const;

    bool isWaterBlocking(void) const;

    bool isHurtableBlock(void) const;

    bool isFenceBlock(void) const;

    bool isFenceGateBlock(void) const;

    bool isThinFenceBlock(void) const;

    bool isWallBlock(void) const;

    bool isStairBlock(void) const;

    bool isSlabBlock(void) const;

    bool isDoorBlock(void) const;

    bool isRailBlock(void) const;

    bool isButtonBlock(void) const;

    bool canHurtAndBreakItem(void) const;

    void getBlockEntityType(void) const;

    bool hasBlockEntity(void) const;

    void getRenderLayer(Block const &, BlockSource &, BlockPos const &) const;

    void getRenderLayer(void) const;

    void getExtraRenderLayers(void) const;

    void getThickness(void) const;

    void getFlexibility(BlockSource &, BlockPos const &) const;

    bool isObstructingChests(BlockSource &, BlockPos const &) const;

    void getVisualShapeInWorld(Block const &, BlockSource &, BlockPos const &, AABB &, bool) const;

    void getVisualShape(Block const &, AABB &, bool) const;

    void getUIShape(Block const &, AABB &) const;

    void getCollisionShape(AABB &, Block const &, BlockSource &, BlockPos const &, Actor *) const;

    void calcGroundFriction(Mob &, BlockPos const &) const;

    bool canHaveExtraData(void) const;

    bool hasComparatorSignal(void) const;

    void getComparatorSignal(BlockSource &, BlockPos const &, Block const &, unsigned char) const;

    void shouldStopFalling(Actor &) const;

    void pushesUpFallingBlocks(void) const;

    void getProperties(void) const;

    void getShadeBrightness(void) const;

//    void forEachBlockPermutation(std::function<bool ()(Block const&)>)const;
//
//    void forEachItemStateInstance(std::function<bool ()(ItemStateInstance const&)>)const;

    void getDebugText(
            std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> &,
            BlockPos const &) const;

    void getParticleQuantityScalar(void) const;

    void getPlacementFacingAll(Actor &, BlockPos const &, float);

    void getPlacementFacingAllExceptAxisY(Actor &, BlockPos const &, float);

    bool isStandingSign(void) const;

    void dealsContactDamage(Actor const &, Block const &, bool) const;

    void initFromDefinition(BlockDefinition const *);

    bool isTrapdoor(void) const;

    void getStateMask(ItemState const &) const;

};


#endif //BDS_SYMBOLS__BLOCKLEGACY_H
