inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ��ʯ����");
  set ("long", @LONG
    ������������һ�������İ�ʯ�����ϣ���������ɽ��������������
��һ��������ˮ�̸�ʹ����ڱ��ߵ�ɽ�嶥�ϣ���ʹ�Ǵ���ô���ľ���
����Ȼ�о�����¥��ƮƮ���죬����׽����

LONG);

  set("outdoors", "cele");
  set("exits", ([ /* sizeof() == 1 */
  "northup"  : "/d/cele/frontyard",
  "eastdown": "/d/cele/stairtop",
]));


  setup();
}
