inherit ROOM;

void create ()
{
  set ("short", "��Ժ����");
  set ("long", @LONG
�����Ƕ�Ժ�����ĵ�,ͬʱҲ�Ǹ�ʮ��·��,���ߴ�����һЩ����,����
����������,������ȴ��һƬ����,�����������ĸ���Ӱ���Ǳ�,���Ƿ�ù�
ȥ������,ǽ������һ��ֽ(paper),����Կ�������д��ʲô��
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"aa64",
  "south" : __DIR__"aa21",
  "north" : __DIR__"aa26",
  "east" : __DIR__"aa68",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "paper" : "
  ��:������(�����˵Ȳ��ý���)
  ��:��ɮ��ϰ��
",
]));

  setup();
  replace_program(ROOM);
}
