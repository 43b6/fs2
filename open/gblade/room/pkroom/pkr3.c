// pkr3.c by konn
inherit ROOM;

void create()
{
        set("short","��һ�����");
        set("long", @LONG
����������Ѫ, �����ղ�����һ�����ҵĴ���, ��֪��˭��˭��������
��, ������һ��, һֻذ�׶�������, ���㲻Զ��ǰ��Ҳ�Ǽ�ֻ����ɢ��
һ��, ��������һ�ѶϽ�һ�Ѷ۵�, �������ο���, Ӧ����һ�����հ�,
�㰵��û�����ⳡ��Ϸ���е���ϧ��




LONG);
        set("exits", ([ /* sizeof == 2 */
            "west"  : __DIR__"pkr2",
            "south" : __DIR__"pkr6",
      ]));
set("no_scale",1);
        set("no_transmit", 1);
        set("light_up", 1);
        setup();
}

