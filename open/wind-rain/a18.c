// by roger && taifar
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short",HIC"梦樨殿"NOR);
set ("long",@LONG
馨香扑鼻，华光刺目，一具巨大的水晶虹色琉璃灯垂挂于顶，光彩
夺目，槐木龙雕椅双列对望，桧木双燕细刻三脚几隔在椅间，如花  
似玉的婢女们则伫立在后，深红纹繁地毯直直往里铺设到垂纱珠帘
之后，有两个婢女正在服侍着一楼楼主。 
LONG);



  set("exits", ([
            "north"  : __DIR__"a17",
                ]));
  set("objects", ([ 
  __DIR__"npc/dau" : 1,
                  ]));
       
        setup();
}
