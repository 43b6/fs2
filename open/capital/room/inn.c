// inn.c

#include </open/capital/capital.h>

inherit ROOM;

string look_sign(object me);

void create ()
{
  set ("short", "������ջ");
  set ("long", @LONG
�����ھ����ϱߵ�������ջ���ҿ�ջ�Ƿ�Բ��������ʢ��
��һ�ң���ջ�����˸�ͨ���ڳ���ӵ�����Ĳ�ҵ����˵����͢���ٶ�
���������мӣ���������ڴ˵������Ĳ껰���ǵ�����������Դ��м�
���ˡ�
    ���Ը��ص����˶�ϲ���ۼ������ｻ����;�ϵļ��ţ���Ҳ������
������������Ȥ����Ϣ��¥���ǹ��ϯ��ͨ���Ǹ���Ǯ���ƵĴ�ү��
���ġ������ſڵĵط�����һ����ľ��ɵ�����(sign)��

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : (: look_sign :),
]));
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"h15",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/waiter2" : 1,
]));

  setup();
}

string look_sign(object me)
{
		return "����д�ţ�������ջ���Ա�һ���֣���ͨ���⡣\n";
}
