// apprentice.c
// Modify By Oda 96/6/5 ����ʦ���ڼ���֮Ӱ���д�� /feature/apprentice.c ��
//                      ��������Ұ� NPC Ϊʦʱ���޷��۵�������

#include <ansi.h>
#define LEAST_RELATIONSHIP 100

inherit F_CLEAN_UP;

int main(object me, string arg)
{
        object ob, old_app;
        mapping family;
        mapping guild=([]),master=([]);

        seteuid(getuid());

        guild=GUILD_D->query_translate();
        if( !arg ) return notify_fail("ָ���ʽ��apprentice [cancel]|<����>\n");
        arg = lower_case(arg);

        if( arg=="cancel" ) {
                old_app = me->query_temp("pending/apprentice");
                if( !objectp(old_app) )
                        return notify_fail("�����ڲ�û�а��κ���Ϊʦ����˼��\n");
                write("��ı����ⲻ���" + old_app->name() + "Ϊʦ�ˡ�\n");
                tell_object(old_app, me->name() + "�ı����ⲻ�����Ϊʦ�ˡ�\n");
                me->delete_temp("pending/apprentice");
                return 1;
        }

        if( !(ob = present(arg, environment(me))) )
                return notify_fail("�����˭Ϊʦ��\n");

        if( ob==me ) return notify_fail("���Լ�Ϊʦ��������....����û���á�\n");
  if(me->query("horse")==1)
return notify_fail("���ܰ�ʦ��\n");
if((me->query("family/family_name")=="ħ����" || me->query("family/family_name")=="ħ��Ī��") && ob->query("family/family_name")=="����")
return notify_fail("����ħ���˲��ܰݽ�Ϊʦ��\n");

        if( me->is_apprentice_of(ob) ) {
                message_vision("$N������������$n��ͷ�밲���е�����ʦ������\n", me, ob);
                return 1;
        }

        if( userp(ob) ) {
        if( me->query("�˼ʹ�ϵ/"+ob->query("id")) < LEAST_RELATIONSHIP )
                return notify_fail("���"+ob->name()+"�Ĺ�ϵ�����ã��㲻�ܰ���Ϊʦ��\n");
        //����ʥ��ĵ��Ӳ��ܰ����
        if(ob->query("class")=="prayer")
                return notify_fail("����ʥ��̵ĵ��Ӳ���˽�����ڵ���\n");
        }

        if( !mapp( ob->query("family") ) )
                return notify_fail(ob->name() + "�Ȳ������κ����ɣ�Ҳû�п�ɽ���ɣ����ܰ�ʦ��\n");

        //���ӿ�������ĳЩ�˲������յ���
        if( ob->query("no_recruit")==1 )
                return notify_fail(ob->name()+"���������ɲ�׼˽�����ڵ��ӡ�\n");

        if( me->query("class") != ob->query("class")
        || !me->query("class") || !ob->query("class") )
                return notify_fail("���ְҵ������ͬ������Ը�����㡣\n");

        // If the target is willing to recruit us already, we do it.
        if( (object)ob->query_temp("pending/recruit") == me ) {

                if( !living(ob) ) {
                        message_vision(
                                "$N������$nΪʦ��\n\n"
                                "$N����������$n���������ؿ����ĸ���ͷ���е�����ʦ������\n\n"
                                "���ǿ�����$n����֪�����˸�����ͷ��\n",
                                me, ob);
                        return 1;
                }

                if( me->query("family") ) {
                        message_vision(
                                "$N��������ʦ�ţ���Ͷ��$n���£���\n\n" 
                                "$N����������$n���������ؿ����ĸ���ͷ���е�����ʦ������\n\n",
                                me, ob);
                   me->set("secondapp",1);
                } else
                        message_vision(
                                "$N������$nΪʦ��\n\n"
                                "$N����������$n���������ؿ����ĸ���ͷ���е�����ʦ������\n\n",
                                me, ob);

                ob->recruit_apprentice(me);
                ob->delete_temp("pending/recruit");

                tell_object(ob, "��ϲ��������һ�����ӣ�\n");
                family = me->query("family");
                printf("��ϲ����Ϊ%s�ĵ�%s�����ӡ�\n", me->query("family/family_name"), chinese_number( me->query("family/generation")));

                return 1;
        
        } else {

                old_app = me->query_temp("pending/apprentice");
                if( ob==old_app )
                        return notify_fail("�����" + ob->name() + "Ϊʦ�����ǶԷ���û�д�Ӧ��\n");
                else if( objectp(old_app) ) {
                        write("��ı����ⲻ���" + old_app->name() + "Ϊʦ�ˡ�\n");
                        tell_object(old_app, me->name() + "�ı����ⲻ�����Ϊʦ�ˡ�\n");
                }

                message_vision("$N��Ҫ��$nΪʦ��\n", me, ob);
                me->set_temp("pending/apprentice", ob );
                if( userp(ob) ) {
                        tell_object(ob, YEL "�����Ը����" + me->name() + "Ϊ���ӣ��� recruit ָ�\n" NOR);
                } else
                        ob->attempt_apprentice(me);
        
                return 1;
        }
}


int help(object me)
{
        write(@HELP
ָ���ʽ : apprentice [cancel]|<����>
ָ��˵�� :
           ���ָ���������ĳ��Ϊʦ������Է�Ҳ��ӦҪ����Ϊͽ��
         �����ͻ������а�ʦ֮�񣬷���Ҫ�ȵ��Է��� recruit  ָ��
         ����Ϊ���Ӳ�����ʽ��ʦ��
           ��������ʦ��ʹ�����ָ�������ʦ���밲��
�ر�ע�� :
           ��ע�����Ѿ�����ʦ�����ֱ���ʦ��Ͷ��������£����м�
         �ܻ���룬�������ۻή���㡣
 
��ο����ָ�� expell��recruit
HELP
        );
        return 1;
}
