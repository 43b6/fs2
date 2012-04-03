// charge.c

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	object ob;

	if( !arg || arg=="" ) {
		if( ob = me->query_charge_target() ) {
			write("��������" + ob->name() + "Ϊ��Ҫ����Ŀ�ꡣ\n");
			return 1;
		}
		write("�����ڲ�û��ѡ����Ҫ����Ŀ�ꡣ\n");
		return 1;
	}

	if( arg=="cancel" ) {
		write("Ok.\n");
		me->remove_charge();
		return 1;
	}

	ob = present(arg, environment(me));
	if( !ob ) return notify_fail("����û������ˡ�\n");

	if( !me->is_fighting(ob) )
		return notify_fail("�����ڲ�û���ڸ�" + ob->name() + "ս����\n");

	me->charge_ob(ob);
	
	if( userp(me) )
		message_vision( "$N��$nΪ��Ҫ����Ŀ�ꡣ\n", me, ob );
	
	return 1;
}

int help(object me)
{
	write(@TEXT
ָ���ʽ��charge [<ս��Ŀ��>|cancel]

���ָ������ѡ��һ�����ں���ս���еĵ���Ϊ��Ҫ����Ŀ�꣬��ν��Ҫ����
Ŀ����ָ�����Ŀ�껹�ڸ���ս����ʱ�򣬻�����������˶�ר�����Ŀ�깥
�������һ��������ȼ���ȫ������ȽϿ��µĵ��ˣ�������Եģ��������
���˵Ĺ��������ʾ�ֻ��ƽ���� 2/3��

Ҫȡ�� charge ģʽ�������� charge cancel�������κβ�������ʾ��Ŀǰ��
�й����Ķ���
TEXT
	);
	return 1;
}
