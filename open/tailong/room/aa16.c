inherit ROOM;

void create ()
{
  set ("short", "��Ժ����");
  set ("long", @LONG
��������Ժ�����ĵ�,ͬʱҲ�Ǹ�ʮ��·��,���ߴ�����һЩ����,����
����������,������ȴ��һƬ����,����͸��һ��ǿ����������,��֪������
�Ƿ�����ʲô���ָ���,ǽ������һ��ֽ(paper),����Կ�������д��ʲô��
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "paper" : "
  �� : ��ɮ��ϰ��
  �� : Ĳ����(�����˵�,���ý���)
",
]));
  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"aa17",
  "south" : __DIR__"aa15",
  "north" : __DIR__"aa19",
  "east" : __DIR__"aa60",
]));

  setup();
  replace_program(ROOM);
}
