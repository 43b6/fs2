inherit ROOM;

void create ()
{
  set ("short", "���۱���");
  set ("long", @LONG
�����Ǵ��۱����е�ƫ��,�����߾��������´������ڵ�,����
�µĴ��߰���,�԰���ɽ��ľ���,��˵������������ƽϢ����
ɱ��Ĺ�Ч,���ߺ�����һ��С����,��֪��������ʲô������
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"aaa.c",
  "south" : __DIR__"aa38",
  "east" : __DIR__"aa42",
]));

  setup();
  replace_program(ROOM);
}
