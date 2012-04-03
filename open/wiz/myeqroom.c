#include <ansi.h>
#include <mudlib.h>
inherit ROOM;
int do_list();
void create() {
set ("short",HIG"网聚奖品‘玩家防具’发放处"NOR);
set ("long","这次网聚共有将近七十位玩家参加!!!!
网聚的奖品单请打help fs_net及help fs_net2
此房间是用来发放玩家防具的房间
东边的房间是发放替身的房间!!!
指令如下：
          get_myeq  <领取这次网聚的奖品>

请注意：玩家EQ限领一套!!!且不能给其他人.....
若因系统设定造成EQ不见,请POST.将花一星期时间检查后!!
方会补发!!!!
");
  set("no_kill",1);
  set("no_fight",1);
  set("light_up",1);
  set("exits", ([
  "north" : "/open/wiz/godroom",
  ]));

}

void init() {
        add_action("do_get_myeq","get_myeq");

}
int do_get_myeq() {
        object me = this_player(),mid,lanc;
        string name=me->query("id");
        if(me->query("fs_net3/myeq"))
         return notify_fail("你以经领了.....!!\n");
        switch(name) {
           case "lancelin"    :
              mid = new("/data/autoload/player-eq/lancelin");
              lanc = new("/data/autoload/player-eq/lancelin-weapon");
                break;
           case "aspire"    :
              mid = new("/data/autoload/player-eq/aspire");
                break;
           case "zero"    :
              mid = new("/data/autoload/player-eq/zero");
                break;
           case "amy"     :
              mid = new("/data/autoload/player-eq/amy");
              break;
           case "pnx"   :
              mid = new("/data/autoload/player-eq/pnx");
              break;
default : return notify_fail(HIY
"对不起!!!您不在名单之上!!\n"NOR);
        }
        mid->move(me);
        me->set("fs_net3/myeq", 1);
        write("恭喜你拿到自我命名天界型的防具!!!\n");
        write("由于时间拖太久了.所以补发三个替身给各位!!\n");
        me->add("standby",3);
        if (name == "lancelin")
         lanc->move(me);
     log_file("net/myeq", sprintf("%s(%s) 领取专属座骑!!时间是%s!!\n"
     ,me->query("name"),me->query("id"),ctime(time()) ));
}

