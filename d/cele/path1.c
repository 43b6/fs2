inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ɽ��С��");
  set ("long", @LONG
    ������������һ��ɽ���ϵ�С����������ȥֻ��ɽ��һ����ɫʯ��
������ɽ��ͨ�����߲�Զ����һ��ƽ̨��ƽ̨�ı��߾��Ǻպ���������
��ʥ�ء�ˮ�̸󡱣�С���ı������������һ�ŷ�������������ɽ��ͨ
��λ��ɽ�۵ġ���̨����

LONG);
  set("outdoors", "cele");
  set("exits", ([ /* sizeof() == 1 */
  "east" : "/d/cele/frontyard",
  "west"  : "/d/cele/path2",
]));

  setup();
}
