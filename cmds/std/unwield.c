// unwield.c

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	object ob, *inv;
	string str;
	int i, count;

	if( !arg ) return notify_fail("��Ҫ�ѵ�ʲô��\n");
        arg = lower_case(arg);
         if(arg=="all") {
    inv = all_inventory(me);
    for(count=0, i=0; i<sizeof(inv); i++) {
if(inv[i]->query_temp("focuskee")==1)
return notify_fail("������������ס�����ܷ��£�\n");
if(inv[i]->query_temp("evil-mblade")==1)
return notify_fail("�����������ס�����ܷ��£�\n");
	if( inv[i]->query("equipped") && inv[i]->query("skill_type") )
	    if( inv[i]->unequip() ) {
                if( me->is_fighting() && userp(me) ) me->start_busy(1);
		if( !stringp(str = inv[i]->query("unwield_msg")) )
                        str = "$N�������е�$n��\n";
		message_vision(str, me, inv[i]);
	    }
    }
    write("Ok.\n");        
    return 1;
  }

	if( !objectp(ob = present(arg, me)) )
		return notify_fail("������û������������\n");

	if( (string)ob->query("equipped")!="wielded" )
		return notify_fail("�㲢û��װ������������Ϊ������\n");

	if(ob->query_temp("focuskee")==1)
		return notify_fail("����ֱ�һ��������ס���޷��������¡�\n");
 if(ob->query_temp("evil-mblade")==1)
return notify_fail("����ֱ�һ�������ס���޷��������¡�\n");
	if( ob->unequip() ) {
		if( me->is_fighting() && userp(me) ) me->start_busy(1);
		if( !stringp(str = ob->query("unwield_msg")) )
			str = "$N�������е�$n��\n";
		message_vision(str, me, ob);
		return 1;
	} else
		return 0;
}

int help(object me)
{
  write(@HELP
ָ���ʽ : unwield <��Ʒ��>
ָ��˵�� : 
           ���ָ������������е�������
�����ο� :
           wield��remove��wear
HELP
    );
    return 1;
}
 
