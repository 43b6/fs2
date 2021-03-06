#include "/open/open.h"
inherit ROOM;

void create ()
{
  set ("short", "湖心小筑");
  set ("long", @LONG
穿过斑斓的石桥,你走向湖心,这里是湖心小筑,有着杉木制的
梁与柱(post),虽不华丽却显的典雅,你倚在横椅上,脚下是清
凉的湖水,游鱼细石(stone),尽在目前,远方是岸上的游人与垂
柳,更远处是蜀州的青山.
LONG);

  set("item_desc", ([ /* sizeof() == 2 */
  "stone" : "你正在欣赏湖底的奇石时,却发现一颗奇异的石子,
上面写着:
           五行相生,金水木火土.
           五行相克,金木土水火.

",
  "post" : "杉柱上题着:
             淡泊以明志  宁静以至远
",
]));

  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/gsword/room/lake0.c",
]));

  set("light_up", 1);

  set ("资源/液体", ([
       "种类" : "水",
       "名称" : "清水",
       "止渴" : 30
  ]) );

  setup();
}
