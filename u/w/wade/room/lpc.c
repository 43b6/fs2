inherit ROOM;

#define WADE_HOME "/u/w/wade/workroom"

void create ()
{
  set ("short", "LPC ���� -- ������̬");
  set ("long", @LONG
�� LPC ��, ֧Ԯ���е�������̬,
	int	����״̬, �����̬��ֵ�ķ�Χ�������й�
	float	������, �ǳ�������, Ҳûʲô��Ҫ
	string	�ִ�
	array	����
	mapping	��Ӧ(����)
	object	���

    ��������˵, float �����ò���, ����ֵ�뵽������ȥ��,
�ڴ���˵��һ����: ������̬�ı�������һ�� "��" ֵ, �� :
  int �� 0, �ִ��� "", ������  ({ }), ��Ӧ�� ([ ]), ��
���� 0. ��һ���� LPC ˵����������.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "back"	: WADE_HOME,
  "int"		: __DIR__"LPC_int",
  "string"	: __DIR__"LPC_string",
  "array"	: __DIR__"LPC_array",
  "mapping"	: __DIR__"LPC_mapping",
  "object"	: __DIR__"LPC_object",
]));

  setup();
}
