// inn.c


inherit ROOM;

string look_sign(object me);

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m �����ջ");
  set ("long", @LONG
��������վ��ѩͤ���ϱߵ�һ��С��ջ���ҿ�ջ��С��ȴ�Ƿ�Բ
��������ʢ����һ�ң���ջ�����˾�˵��һλ�����ĺ������ˣ����
��ĸ�Ե���Ļ���Ҳ�����������������������֮�⣬���Ը��ص�����
��ϲ���ۼ������ｻ����;�ϵļ��ţ���Ҳ��������������������Ȥ��
��Ϣ�������ſڵĵط���һ����ľ��ɵ�����(sign)��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"inn_2f",
  "east" : __DIR__"square",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : (: look_sign :),
]));
  set("valid_startroom", 1);

  setup();
}

string look_sign(object me)
{
	if( wizardp(me) )
		return "����д�ţ������ջ���Ա�һ��С�֣�ׯ˼���⡣\n";
	else
		return "����д�ţ������ջ��\n";
}
