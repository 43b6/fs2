// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
        set("short","��������");
  set ("long", @LONG
����һ������ŵ����� . �����ǵ�һ�������Ӷ�ͷ , ��
����ְ��ʮ���� , ������������ , ����һ�δ�Ӣ�µĴ����Ŷ�
Ա�ǻ��˵��� , ���������һ����ս���������� . �����Ǹ�л
���Ķ��� , �ڴ����� , �������Ϊ������ . ����ƽ�����ʮ
�ֶ�ʢ .

LONG);

        set("no_fight",1);
        set("no_magic",1);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
        "east" : "/open/port/room/r2-2",
]));

  setup();
}
