inherit ROOM;
string moveout();
#include <ansi.h>
void create()
{
set("short","�������м�վ");
set("long",@LONG

�����˸ոռ��ҵ��������ò���������������㿴����һЩ������
������¶����ʮ�����ɵ�Ц�ݣ�Ҳ��һЩ���������⣬������������
һ����Ϣ����������ô���Ŀ��飬��Ҳ���Ծ��ľ����е�����....

�ڷ�����������и�͸���Ĳ�����״��(glass pillar)��
LONG);
set("exits",([
"up":__DIR__"busy_room41",
]));
set("no_die_room",1);
set("light_up",1);
set("no_fight",1);
set("item_desc",([
"glass pillar":(:moveout:),
"pillar":(:moveout:),
]));
set("no_transmit",1);
set("no_auc", 1);
setup();
}
int valid_leave(object me,string dir)
{
if(dir=="up")
{
int check=me->query("quest/start_game");
if(check<41)
{
tell_object(me,HIR"ϵͳ����ľ�Ƭ���ϲ�����ͨ��¥�ϡ�\n"NOR);
return 0;
}
{
message_vision(HIW"ϵͳ����ȡ"+me->query("name")+"����Ƭ��ͨ����\n"NOR,me);
return 1;
}
}
}

string moveout()
{
object me;
me=this_player();
tell_object(me,HIW"
����һ��������״�Ŀ������Ա���һЩ��ť(button)������԰���ȥ��\n"NOR);
return "\n";
}

void init()
{
add_action("do_push","push");
}

int do_push(string arg)
{
object me=this_player();
if(!arg)
return 0;
if(arg!="button")
{
tell_object(me,"���쳤���֣�ȴ���Ҳ���Ҫ���µĶ�����\n");
return 1;
}
else
{
message_vision(HIW"$N�����߽��˲�����״�ڡ�\n"NOR,me);
me->move(__DIR__"moveroom");
return 1;
}
}