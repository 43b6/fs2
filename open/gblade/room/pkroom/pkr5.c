// pkr5.c by konn
inherit ROOM;

void create()
{
        set("short", "��һ�����");
        set("long", @LONG
���������µ�һ������, ̧ͷһ��, ���ͷ����һ����š����µ�һ�á�
����ľ���, �������ǰ����һ����������׵ı��������, ������ֱ߳�
��������ֱ���, �й�����ǹ����������ì���ܡ��ᡢ����ꪡ��ޡ�ꯡ�
�Ρ�쯡��桢��ͷ�������������״��ʮ���ֱ���������ѡ, �ڳ��ӵ����
վ��һ�����಼��, ��������ɮ��Ь��׳��, �����Ǳ�����������ˡ�
���ų����Ｘ�������ڱ���, �㲻��Ҳ����ȥ�����ǽ���������



LONG);
        set("exits", ([ /* sizeof == 4 */
            "north" : __DIR__"pkr2",
            "east"  : __DIR__"pkr6",
            "west"  : __DIR__"pkr4",
            "south" : __DIR__"pkr8",
      ]));

        set("objects", ([ /* sizeof == 1 */
            "/open/gblade/npc/officer1" : 1,
      ]));
set("no_scale",1);
        set("no_transmit", 1);
        set("light_up", 1);
        set("no_clean_up",1);
        setup();
}

