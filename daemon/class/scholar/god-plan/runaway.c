// By Swy ������� QC 98/6/20
#include <ansi.h>
int perform(object me,object target)
{
	mapping exit = environment( me )->query("exits");
	string *dirs;
	int i;
        if(!me->is_fighting(target))
		return notify_fail("��ʮ����ֻ����ս����ʹ�á�\n");
	if( me->query("sen") < 5 ) 
		return notify_fail("��ľ��񲻹����У��޷�ʹ����ʮ���ơ�\n");
// ��������
   if( me->query("family/family_name") != "����")
    return notify_fail("�������������������֣���^_^\n");
	if( !exit ) return notify_fail("�����޴����ӣ�\n");
	me->add("sen",-5);
        me->add("gin",-50);
if(80>random(100)) {
	message_vision( HIY + @LONG
$N�����Ʋ�����ʹ�õ���ʮ���ƣ��뿪���ֳ���
LONG + NOR , me );
	dirs = keys( exit );
	i = random( sizeof(dirs) );
	load_object( exit[dirs[i]] );
	me->move( exit[dirs[i]] );
} else {
        message_vision( HIW + @LONG
$N�����Ʋ�����ʹ�õ���ʮ���ƣ���������ʶ���ˣ�
LONG + NOR , me );
       me->start_busy(1);
}
        return 1;
}

