// onion ��д��, ���԰���ͬ�Ķ�����
// wade fixed some bug, �Լ����� CPU ʱ��. (5/24/1996)
// fund �޸ģ������Ʒ�������� (8/15/1996)

#include <ansi.h>
#include <carry.h>

varargs int main( object me, string arg, int mode )
{
	object	ob, *inv, *tmp;
	int i, j, found;

	if( wizardp(me) ) {
		if (!arg) ob = me;
		else if (arg == "here") ob = environment(me);
		if (!ob) {
		  arg = lower_case(arg);
                  ob = find_player(arg);
		}
		if ( !ob ) ob = find_living(arg);
		if ( !ob ) ob = present(arg, environment(me));
		if( !ob ) ob = me;
	}
	else ob = me;

	if( mode==1 )
		ob = me->query_temp("pal");

	inv = all_inventory(ob);
	if( !sizeof(inv) ) {
		write((ob==me)? "Ŀǰ������û���κζ�����\n"
			: ob->short() + "����û��Я���κζ�����\n");
		return 1;
	}
	
	tmp = ({});
	for(i=0;i<sizeof(inv);i++) {
	  found = 0;
	  for(j=0;j<sizeof(tmp);j++)
	    if ( base_name(inv[i]) == base_name(tmp[j]) &&
		inv[i]->short() == tmp[j]->short() &&
		inv[i]->query("equipped") == tmp[j]->query("equipped") &&
		inv[i]->query_temp("secured") == tmp[j]->query_temp("secured") )
	    {
		tmp[j]->add_temp("inv_num",1);
		found = 1;
		break;
	    }
	  if (!found) {
		tmp += ({ inv[i] });
		inv[i]->set_temp("inv_num",1);
	  }
	}
	inv = 0;
	
	
	printf ("%s���ϴ���������Щ����(���� %d%%)(�ռ� %d%%):\n",
		(ob==me)? "��": ob->short(),
		  (int)ob->query_encumbrance() * 100
		/ (int)ob->query_max_encumbrance(),
		100 * sizeof(tmp) / MAX_CARRY );
	for(i=0; i<sizeof(tmp); i++) {
	  j = tmp[i]->query_temp("inv_num");
	  printf("%s%s%s%s%s\n",
		  tmp[i]->query_temp("secured")?HIY "*" NOR:" ",
	tmp[i]->query("equipped")? HIC"��"NOR : "  ",
		  j==1 ? "" : chinese_number(j)+tmp[i]->query("unit"),
		  tmp[i]->short(),
		  wizardp(me)? " ("+(string)base_name(tmp[i])+")":""
		);
	}
	return 1;
}

int help (object me)
{
        write(@HELP
ָ���ʽ : inventory			<һ�����>
	   inventory <������������>	<��ʦר��>
	   inventory <here>		<��ʦר��>
ָ��˵�� : 
           ���г���(��)Ŀǰ������Я����������Ʒ��
   ע    : ��ָ����� " i " ���档
HELP
);
        return 1;
}
