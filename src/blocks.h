#pragma once

#include "block.h"
#include "position.h"

/*         _
 *    ____| |
 *   |______|
 */
class LBlock : public Block
{
public:
    LBlock(void);
};

/*    _
 *   | |____
 *   |______|
 */
class JBlock : public Block
{
public:
    JBlock(void);
};

/*    ________
 *   |________|
 */
class IBlock : public Block
{
public:
    IBlock(void);
};

/*    ___
 *   |   |
 *   |___|
 */
class OBlock : public Block
{
public:
    OBlock();
};

/*       ____
 *    __|  __|
 *   |____|
 */
class SBlock : public Block
{
public:
    SBlock(void);
};

/*       __
 *    __|  |__
 *   |________|
 */
class TBlock : public Block
{
public:
    TBlock(void);
};

/*    ____
 *   |__  |__
 *      |____|
 */
class ZBlock : public Block
{
public:
    ZBlock(void);
};