// 重新发放 meq by swy
#include <room.h>
#include <ansi.h>
inherit ROOM;
string *meq_id = ({
"babe",
"turbocc",
"yukigirl",
"son",
"aro",
"pzp",
"robo",
"bbblade",
"madoka",
"killer",
"cyberfight",
"alus",
"bloodblade",
"nakama",
"xick",
"lunn",
"catbaby",
"aanswer",
"potal",
"cutepig",
"ashuar",
"kylin",
"swy",
"ken",
"konn"
});
void create ()
{
set ("short",HIB"‘魔龙防具’发放处"NOR);
set ("long",@LONG

以下玩者能来领取 :

yukigirl aro pzp bbblade madoka killer cyberfight
alus bloodblade nakama xick lunn catbaby aanswer   
potal cutepig robo ashuar kylin

指令 : get_meq

LONG);
  set("no_kill",1);
  set("no_fight",1);
  set("light_up",1);
  set("exits", ([
"north" : "/open/wiz/fsroom.c",
  "south" : "/open/wiz/godroom",
]));
  setup();
}

void init()
{
add_action("in_meq","get_meq");
}
int in_meq()
{
object me = this_player(),mid;
string name=me->query("id");
int i,j,number=sizeof(meq_id);
if(!me->query("fs_net3/new-meq"))
{
    for (j=0; j<number; j++)
    {
    if(meq_id[j] == name)
    {
     write("恭喜你拿到网聚奖品魔龙型的防具!!!\n");
     mid=new("/data/autoload/blademan/mdragon.c");
     mid->set("boss",me->query("id"));
     mid->move(me);
     me->set("fs_net3/new-meq",1);
    me->set("new-by-swy",1);
log_file("net/meq", sprintf("(%s)领取魔龙防具 时间是%s\n",
me->query("id"),ctime(time())));
     return 1;
    }}
    write("sorry!!你不在名单中!!\n");
    return 1;
 }
    write("你以经领了!!!\n");
    return 1;
}
