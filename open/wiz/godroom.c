// 发放新的 godeq by swy
#include <room.h>
#include <ansi.h>
inherit ROOM;
string *meq_id = ({
"fuzzy",
"hiking",
"leon",
"guilty",
"dunga",
"chritina",
"lancelin",
"aspire",
"zero",
"any",
"pnx",
"leing",
"swy",
"bss",
"dhk",
});
void create ()
{
set ("short",HIW"‘天界防具’发放处"NOR);
set ("long",@LONG

以下玩者能领 :

fuzzy hiking leon guilty dunga chritina
lancelin aspire zero any pnx leing

指令 : get_godeq

LONG);
  set("no_kill",1);
  set("no_fight",1);
  set("light_up",1);
  set("exits", ([
  "north" : "/open/wiz/meqroom",
]));
  setup();
}

void init()
{
add_action("in_meq","get_godeq");
}
int in_meq()
{
object me = this_player(),mid;
string name=me->query("id");
int i,j,number=sizeof(meq_id);
if(!me->query("fs_net3/new-godeq"))
{
    for (j=0; j<number; j++)
    {
    if(meq_id[j] == name)
    {
     write("恭喜你拿到网聚奖品天界型的防具!!!\n");
     mid=new("/data/autoload/god/god_eq.c");
     mid->set("boss",me->query("id"));
     mid->move(me);
     me->set("fs_net3/new-godeq",1);
    me->set("new-by-swy",1);
log_file("net/godeq", sprintf("(%s)领取天界防具 时间是%s\n"
,me->query("id"),ctime(time())));
     return 1;
     }}
    write("sorry!!你并不在名单上!!\n");
    return 1;
}
    write("你以经领了!!!\n");
    return 1;
}
