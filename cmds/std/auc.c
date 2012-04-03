// auc.c

#include <ansi.h>
#include <room.h>
#include "/open/open.h"

inherit F_CLEAN_UP;

int main( object me, string arg )
{
	int	value;
	string	id, *tuned_ch;
	object	ob, boss, *light, env;

	seteuid(getuid());
        tuned_ch = me->query_temp("channels");
        if( !pointerp(tuned_ch) )
          me->set_temp("channels", ({ "mud" }) );
        else if( member_array("mud", tuned_ch)==-1 )
          me->set_temp("channels", tuned_ch + ({ "mud" }) );
	if(!arg)
	  return notify_fail("��֪����ʽ��help auc\n");
	arg = lower_case(arg);
	env = environment(me);

	if (!catch(load_object(AUROOM))) {
          if (!(boss=find_living("auction boss")) &&
              !(boss=find_object("auction boss")))
          return notify_fail ("�ϰ��ȥ��ˣ�ˡ�\n");
 	}
	else return notify_fail ("���е���������������ʦ����\n");

	if( wizardp(me) ) {
		ob = present( arg, me );
		if( !ob ) ob = present( arg, env );
		if( !ob ) return notify_fail( "�޴���Ʒ��\n" );
		call_other( boss, "do_sell", me, ob );
	}
	else if( sscanf(arg, "%d", value) != 1) {	// �Ͷ���ȥ����
	  if ((ob=present(arg, me)) &&
		!ob->query("no_drop") &&
	!ob->query("no_auc") &&
		!ob->query("secured"))
	  {
	    if (ob->query("had_light")) {
	        ob->delete("had_light");
	        ob->delete("short");
		write (sprintf ("�����%s��ȥ����ʱ����%s%s��������������\n",
		  ob->name(), ob->query("unit"), ob->name()));
	    }
	    if (ob->query("money_id"))
		return notify_fail ("��....����������Ǯ�, �Բ�����!\n");
	    call_other(boss, "do_sell", me, ob);
	    message_vision("�㿴�����й�˾���ͻ�Ա����Զ����������$N���е�"+
			   ob->name()+"\n", me);
	    return 1;
	  }
	  else {
	    tell_object (me, "������ƭ���й�˾����Ա����\n");
	    return 1;
	  }
	}
	else if (me->can_afford(value)) {	// ����
	  call_other(boss, "do_buy", me, value);
	  tell_object (me, "���绰���ߺ����ϰ�˵����Ը����"+
			   CHINESE_D->cvalue(value)+"���ꡣ\n");
	  me->pay_money(value);
	}
	else tell_object (me, "��! ������ƭ��ƭ�ȵİ�!!\n");
	return 1;
}

int help(object me)
{
   write( @HELP
ָ���ʽ: auc <���>|<Ǯ��>
ָ��˵�� :
           ������ϵͳ����һ�ζ������ȥ����������˾���о���Ҫ
         �����ļ���
           �������������ĵ��У�Ҳ����ʹ�ñ��������ꡣ
ָ��� :
           Ҫ���������� auc <���>���� auc sword
           Ҫ��������� auc <��Ǯ>���� auc 100
�ر�ע�� :
           ������̵Ľ�Ǯ��λ����Ǯ����ϵͳ����ת���������.
         ������Ҫ��һ�������������Ӷ�ʮ��Ǯ���� auc 10320
         ����û�����ޣ�����ÿ�μӵ������ս������ֵ�й�,
         ���⣬[�κ�]����������������
HELP
   );
   return 1;
}
