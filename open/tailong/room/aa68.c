inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
������Ǵ�˵�е�������ʥ---��������������������ס�ĵط�,��������
,����İ���ʮ�ֵĺ�������,����ʹ�һ��,������������ȥ,ȴ���Ҳ�������
����Ӱ,���������������
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"aa22",
]));

  setup();
  replace_program(ROOM);
}
