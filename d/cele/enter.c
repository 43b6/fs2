inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ˮ�̸����");
  set ("long", @LONG
    ������ˮ�̸�����ţ�һ��������Ƣ��̴��ʹ�㾫��Ϊ֮һ����
�Ź���������ȫ�������ϵȵ�̴ľ��ɣ��������������һ���Ҷ��
�����ɷ����д�ż������֣�������ȫȻ������������ʲô�֡�

LONG);

  set("outdoors", "cele");
  set("exits", ([ /* sizeof() == 1 */
  "north"  : "/d/cele/guildhall",
  "south": "/d/cele/frontyard",
]));


  setup();
}
