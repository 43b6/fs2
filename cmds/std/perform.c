// perform.c
inherit F_CLEAN_UP;
inherit F_FUNCTION;
int main(object me, string arg)
{
        object weapon;
        string martial, skill;
        int result;
        seteuid(getuid());
        if( !arg ) 
                return notify_fail("��Ҫ���⹦��ʲô��\n");
        if( me->query("force") < 0 )
     {
     me->set("force",0);
   tell_object(me,"û��������ʲѽ?\n"); 
   return 1;
     }
        if(me->query_temp("is_busy"))
                return notify_fail("�����Ϣ��������,��ʱ�޷�ʹ���⹦!!!\n");
        if(me->query_temp("is_busy")||me->is_busy() )
        return notify_fail("��һ�������������������к�����Ϣ��\n");

//sun_fire_sword ���⹦��

        if( me->query_temp("no_power") )
                return notify_fail("��Ŀ�Ľ��⻹���������۵ף�ʹ���޷�ȫ��������\n");

        if( me->query_temp("no_power_f") )
                return notify_fail("�㱻���Ե������������裬������޷�������ʹ�þ���\n");

        if( me->query_temp("arrayp") )
                return notify_fail("�󷨸տ�ʼ��ת����û�취����ʹ�þ���\n");
        
        if( environment(me)->query("no_fight") )
             return notify_fail("���ﲻ׼ս����\n");

        if( sscanf(arg, "%s.%s", martial, arg)!=2 ) {
                if( weapon = me->query_temp("weapon") )
                        martial = weapon->query("skill_type");
                else
                        martial = "unarmed";
        }
//add by bss ��Ϊ��perform�����õ�����,�ʼ��һ��
/*
        if(!(TEMP_D->update_perform(me,martial,arg)))
                return 0;
*/

        if( stringp(skill = me->query_skill_mapped(martial)) )
        {
                if( SKILL_D(skill)->perform_action(me, arg) ) 
                {

			
                      	 	 me->set_temp("is_busy",1);
                        call_out("del_busy",4,me);
                 		return 1;
	
                }
        }
        if(!find_object(SKILL_D(martial)))
          if(!load_object(SKILL_D(martial)))
            return 0;
        if( SKILL_D(martial)->perform_action(me, arg) ) {

                me->set_temp("is_busy",1);
             call_out("del_busy",4,me);
                return 1;
        }
        return 0;
}

void del_busy(object me) {

        if( me )        // ʹ�� call_out һ��Ҫ��� player �Ƿ�����
                me->delete_temp("is_busy");
        return;
}

int help(object me)
{
        write(@HELP
ָ���ʽ : perfrom [<�书����>.]<��ʽ����> [<ʩ�ö���>]
ָ��˵�� :
           �������ѧ���⹦(ȭ�š�����������....)��һЩ����Ĺ���
     ��ʽ����ʽ�����������ָ����ʹ�ã���������� enable ָ��ָ��
     ��ʹ�õ��书����ָ���书����ʱ�����ֵ��⹦��ָ���ȭ�Ź���
     ʹ������ʱ���Ǳ��е��书��
           ��������⹦�������಻ͬ��������ʽ������ͬ�ģ����߲���
     ��ȭ�Ÿ��������ܵ��书(���Ṧ)�������� <�书>.<��ʽ>  �ķ�ʽ
     ָ�����磺
        perform sword.powerfocus 
        perform move.reflexion
           ���仰˵��ֻҪ�� enable �е��书��������ʽ�ģ���������
     ���ָ��ʹ�á�

�� ��¼ �������ܵ��⹦
        �����ǻ��������к����⹦���ܵĲ���

��������   �⹦����   �÷�                                ��ע
��������   ����       perform sword.swordkee [<target>]   ��ʿ�����͡�����
����ʶ��   �̻�ѵʾ   perform literate.preach [<target>]  ����
HELP
        );
        return 1;
}
