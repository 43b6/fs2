// pkr2.c by konn
inherit ROOM;

void create()
{
        set("short","��һ�����");
        set("long", @LONG
ǽ�Ͽ��м���С��, ����ǰ��ϸһ��, ���ƺ��ǿ˵���ʤ���, ֻ������
д�š��Ծ��ƶ�, �����ƿ족, �⿴��������̫��ȭ�ľ���ѽ, ����ϸ�ĳ�
˼��һ��, ��仰��Ҳ���е���ġ������������ǽ�ϵ�С����, ���ص���
ǰ��Ҳ����һ��������Ļ���, ��������ʦ������������Ϊ���еĵط�����



LONG);
        set("exits", ([ /* sizeof == 3 */
            "east"  : __DIR__"pkr3",
            "west"  : __DIR__"pkr1",
            "south" : __DIR__"pkr5",
      ]));
set("no_scale",1);
        set("no_transmit", 1);
        set("light_up", 1);
        setup();
}

