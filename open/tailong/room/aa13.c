inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�����������ߵ�����Ժ���ȵĻ���,�����������߾Ϳ��Ե�����Ժ
�е�Ĳ����,Ĳ�����ڳ����������µĸ���������, ��������Լ�û��
���ֽ������ǲ�Ҫֻ��ð�ձȽϺ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"aa11",
  "north" : __DIR__"aa15",
]));

  setup();
  replace_program(ROOM);
}
