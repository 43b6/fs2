inherit ROOM;

void create ()
{
  set ("short", "LPC ˵��֮ ���");
  set("long", @LONG
��ϵ�е� LPC ˵�����˵��µĻ�������:
���Ѿ�ѧ��ĳЩ������ UNIX ����, ��: ls, cd, mkdir, mv, rm, �ȵ�, �Լ�
��֪����ôʹ�� edit �༭����. ������֪�� C, ����ᷢ�� LPC ���� C, ��
���ֲ��� C. ������Ѿ���ģ�黯��ʽ��Ƹ���Ļ�, Ҳ�������������д LPC
 ��ʽ��һ���谭, �����˷������谭. ������δ����д�� C ��ʽ����(��
���� 1991 ������ʱһ��), ��ô��ֻ����һЩ�򵥵Ķ�������, �����̿���,
�߼�ָ��Ĳ���, ˵����, �� C ���Ե��˽Ⲣû�кܴ�����(����������), ��
Ϊһ�� C �� LPC ���õĵط������״�ͷѧ���.. ��������, ��Ȱ����˳���
���ֲ�. ÿ�µĿ�ͷ���м�̵�˵��, ֮�����ܸ��µ�˳��, �������Ǹ��µ�
����. ÿ�ڵ������м�̵ı���ժҪ˵��, ͨ��������Щϣ����֪��������.
    ���������ĳһ��, ȷ�����ͷ��β������ȴ���ǲ����Ļ�, ���Լ��Ÿ���.
��Ϊ, �����Ե�, ������һ�����˰ܱ�, ������Ҳϣ���ܶ�������. ͬ����,
��ĩ��ժҪ���������������Ҳ����Ÿ���. ������� mud �Ǽ��� LP mud ��,
���Լĵ� descartes@nightmare, ������ĵ� borg@hebron.connected.com.
LONG);

  set("exits", ([
	"mudlib": __DIR__"mudlib",
	"driver": __DIR__"driver",
	"area"	: __DIR__"area",
	"object": __DIR__"object",
	"back"	: "/u/w/wade/workroom",
  ]) );
  setup();
}