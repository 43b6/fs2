inherit ROOM;
int have = 1;
int time = 0;
#include <ansi.h>

void create ()
{
        set ("short", "���⸣��");
        set ("long", @LONG
����֮�У���������һ�����˸о��徲�ĵط���һ�������ζ��
�����Ĵ�һ�������д�����ȴ��֪��ʲô���Ķ����������棬������
����֮�У�͸��һ��������ˬ����ζ����������һ�в���졣
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 1 */
        "west"     : __DIR__"mon30",

]));
        setup();
        set_heart_beat(1); 

}
void init()
{
    add_action("search_here", "search");
//    add_action("pull_it","pull");
} 
int search_here(object me,string arg)
{
    me=this_player();
    if( (this_player()->query("combat_exp",1) > 1000000)  && have)
    tell_object(me,"�����Ღ������Ļ��ԣ������ڻ����з�����һ��ǧ����֥��\n"+
            "��ʱ������Ѱ˼Ҫ��ΰ�����(pull it)��\n");
    else
    tell_object(me,"Ҳ������Ľ����������㣬��ʲôҲû����...\n");
    return 1;
}
int pull_it(string arg)
{
    object me,ob;
    me = this_player();
    if( (me->query("combat_exp",1) > 30000)  && have)
    {
    ob=new("/open/mon/npc/beast.c");
    have = 0;
    ob->move("/open/mon/mon31");
    message_vision("����$N������֥ʱ��ֻ����֥�û���һֻ����������˹�������\n", me);
    return 1;
    }
    return 0;
}   
void heart_beat()
{
time++;
if(time > 300)
{
time = 0;
have = 1;
}
return;
}

