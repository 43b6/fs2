// �����µ� godeq by swy
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
set ("short",HIW"�������ߡ����Ŵ�"NOR);
set ("long",@LONG

������������ :

fuzzy hiking leon guilty dunga chritina
lancelin aspire zero any pnx leing

ָ�� : get_godeq

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
     write("��ϲ���õ����۽�Ʒ����͵ķ���!!!\n");
     mid=new("/data/autoload/god/god_eq.c");
     mid->set("boss",me->query("id"));
     mid->move(me);
     me->set("fs_net3/new-godeq",1);
    me->set("new-by-swy",1);
log_file("net/godeq", sprintf("(%s)��ȡ������ ʱ����%s\n"
,me->query("id"),ctime(time())));
     return 1;
     }}
    write("sorry!!�㲢����������!!\n");
    return 1;
}
    write("���Ծ�����!!!\n");
    return 1;
}
