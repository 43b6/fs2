inherit ROOM;

#define WADE_HOME "/u/w/wade/workroom"

void create ()
{
  set ("short", "LPC ���� -- ����");
  set ("long", @LONG
���о���һ������ͬ������̬�ı�����������һ��, ���ִ���һ������
��Ԫ����һ��, ���п���ʹ�ñ�����ʹ�ñ�ļ�һЩ, ����:
	if (str == "gold" || str == "silver || str == "coin) ....
���ַ�ʽ���Ա��������һ��������:
  string *money=({ "gold", "silver", "coin" });
�ж�ʱ�Ϳ����� if (member_array(str, money) == -1) ................;
ע��, ��Ϊ�����Ǵ� 0 ��ʼ���, ���Բ��ڸ������д���ֵ�� -1,
��Ȼ, �������˵, ���е��������� *, �� int *integer, string *money ��
���õ��� object	*obs=users();	// users() ������������ʹ���ߵ��������
���еļӷ�, ���������� string str1, str2, *ary1, *ary2, *ary;
��ô.....:  ary = ({ str1 }) + ({ str2 }); ��������ͬ��˼:
	    ary = ({ str1, str2 });
	���м�������: ary = ary1 + ary2;
LONG);

  set("exits", ([
	"back"	:	__DIR__"lpc",
  ]) );

  setup();
}
