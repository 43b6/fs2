// Room: /open/capital/room/h04.c

inherit ROOM;

void create ()
{
  set ("short", "������ͬ");
  set ("long", @LONG
���ھ���ÿ�������һ��״Ԫ�Ŀ��ԣ�������������������Ͽ���
����������������ʱ���ۼ����ۡ������ĵõĵط����ʳƴ˺�ͬΪ����
�������̵������۵Ļ���ʯ, ���Եĳ������ֵ���Ҫ�ԡ�
    ��������������˳�, ������ѡ��һЩ�ķ��ı�--�ʡ�ī��ֽ����
, ÿ��������������Ǿ�Ʒ��

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"h01",
  "east" : __DIR__"r67",
]));
  set("outdoors", "/open/capital");

  setup();
}