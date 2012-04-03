// Room: /open/tendo/room/door.c

inherit ROOM;
void create()
{
        set("short", "ʥ����");
        set("long", @LONG
�����˵��㷢������ľ���������ɽ�ϵ�ʥ����û������������
ǰȴ������һ�����ۡ������ƺ���Ư���ڿ���һ�㣬�����Ŵӵ�����
�ӳ������������㻹�жξ���������ȥ�ƺ��ǲ����ܵģ�������ĺ�
���Ļ�����ʹ��ȥ����......
LONG
        );
        set("exits", ([ /* sizeof() == 2 */
        "out":"/open/main/room/M13",
]));
  set("outdoors",1);
        setup();
}
void init()
{
        add_action("do_search", "search");
        add_action("do_jumpup","jump");
}

int do_jumpup(string str)
{
        object who;
        who = this_player();
        if(who->query("class") != "taoist"
        || !who->query("class") );
        tell_object(who,"�����ڴ���һ�����������:�Ǳ��ɵ���,��������");
        who->move("/open/center/room/inn");
        if(str!="up"){return 0;}
        tell_object(who,"�����һ�����ŵ�̤�����ŵı�Ե��\n");
        who->move("/open/tendo/room/l1.1");
        tell_room(this_object(),"�㿴��"+who->query("name")+"����һ����������"+
                                "�ϴ���������̧ͷ��ʱ��ȴ�Ѿ������ˡ�\n");
        if(who->query("class") != "taoist"
        || !who->query("class") );
        who->move("/open/center/room/inn");
        return 1;
}
int do_search()
{
object me;
 me = this_player();
 tell_object(me,"ǰ��������һ��͹��,��Ӧ�ÿ�������ȥ(jump up)��\n");
 return 1;
}
