// donate.c by Anmy

#include <ansi.h>

inherit F_GUILDCMDS;

void pre_donate();
void do_donate(object ,object);

int main(object me, string arg)
{
        object env;
        object *inv;
        int i;
        env = environment(me);

        if( arg=="cancel" ) {
                if( !me->query_temp("ļ����") )
                        return notify_fail("����,�㻹û׼����ļ���..\n");
                tell_object(me, HIW"�㿪ʼ�������빫,�뿪���\n"NOR);
                me->delete("greeting_msg");
                me->set("id", me->query("old_id"));
                me->set("name", me->query("old_name"));
                me->set("nickname", me->query("old_nick"));
                me->set("title", me->query("old_title"));
                me->delete("old_id");
                me->delete("old_name");
                me->delete("old_nick");
                me->delete("old_title");
                me->delete_temp("ļ����");
                me->delete_temp("��׼��");
                return 1;
        }
        if( me->query_temp("ļ����") )
                return notify_fail("���Ѿ������빫׼������Ǯ��...\n");
        if( me->is_fighting() )
                return notify_fail("�ѵ��˴�����Ǯ��Ȼ����ģ���ʲô����\n");
        inv = all_inventory(env);
/*
        for( i=0; i<sizeof(inv); i++ ) {
                if( userp(inv[i]) && inv[i]!=me )
                        return notify_fail("���ﻹ�б����ڣ���������ᱻ���ְɡ�\n");
        }
*/
        tell_object(me,"������빫�ŵ�����,�ȴ�����ʩ��..\n");
        if( !me->query("old_id") ) {
                me->set("old_id", me->query("id"));
                me->set("old_name", me->query("name"));
                me->set("old_nick", me->query("nickname"));
                me->set("old_title", me->query("title"));
                me->set("id", "buddha");
                me->set("name", "����");
                me->set("title", HIY"��������ҵ�����Ҳ"NOR);
                me->delete("nickname");
        }
        me->set_temp("ļ����", 1);
        me->set_temp("��׼��", 1);
        me->set("greeting_msg", ({
        (:call_other,file_name(this_object()),"pre_donate":),
        }) );
        return 1;
}

void pre_donate()
{
        int i;
        object *inv, bandit;
        object ob = this_player();

//        if( wizardp(ob) ) return;

        inv = all_inventory(environment(ob));
        for( i=0; i<sizeof(inv); i++ ) {
                if( inv[i]->query_temp("ļ����") )
                        bandit = inv[i];
        }

        if( ob->query_temp("�Ѿ�Ǯ") )
return;
        ob->set_temp("��׼��", 1);
        call_out("do_donate", 1, bandit, ob);
}

void do_donate(object bandit, object ob)
{
        int face, money, kee;

        tell_object(bandit,HIW"\n ���������ڵ���, ΢Ц�Ķ���"+ob->name()+"˵��\n\n�������ӷ�, �ҷ�ȱ�, ʩ���Ƿ���ʩ���Ǯ, �Ա��ؽ������¡�\n\n"NOR);

        face =( bandit->query_skill("change",1)+bandit->query("kar") < random(ob->query("combat_exp")/10000)+ob->query("int") );
        if( face )  tell_object(bandit,HIW"��, �Է��ѿ������Ǽ�ð�ġ�\n"NOR);


        tell_object(ob,HIC"\n������һ����"+(face?bandit->query("old_name"):"һ������")+"��΢Ц�Ŀ�����˵��\n\n�������ӷ�, �ҷ�ȱ�, ʩ���Ƿ���ʩ���Ǯ, �Ա��ؽ������¡�\n\n"NOR);

        money = ( ob->query("combat_exp")/5000 + 1 ) * 100;

        if( bandit->query("kar")*bandit->query("combat_exp")/10 > ob->query("cor")*ob->query("combat_exp")/20 ) {
                tell_object(bandit,"�������"+ob->name()+"��˵�����ֵ���"+ob->name()+"�ƺ��п���ĸ��ܣ�����"+ob->name()+"���������ľ��˵�Ǯ���㡣\n");
tell_object(ob,"���Ǻ��ж�����˵�����ֵ������ƺ��п���ĸ��ܣ���������������ľ��˵�Ǯ������\n");
                if( ob->can_afford(money) ) {
                        ob->pay_money(money);
                        bandit->pay_player(money);
                        tell_object(ob,HIC"����"+(face?bandit->query("old_name"):"����")+"һЩ���⡣\n"NOR);
                        tell_object(bandit,HIC""+ob->name()+"���һ�����⡣\n"NOR);
                        tell_object(ob,HIW""+(face?bandit->query("old_name"):"����")+"΢Ц��˵����ʩ�����д�����, �������и�л\n"NOR);
                        tell_object(bandit,HIW"��΢Ц��˵����ʩ�����д�����,�������и�л\n"NOR);
                } else {
                        tell_object(ob,(face?bandit->query("old_name"):"����")+"�������Ϻ���ûǮ��΢Ц��˵: �ú�����Ϊ��ǿ�����ɡ�\n");
                        tell_object(bandit,"�㿴��"+ob->name()+"���Ϻ���ûǮ��΢Ц��˵: �������������ǿ��֮���ɡ�\n");
                        kee = ob->query("eff_kee")*3/4;
                        ob->set("eff_kee", kee);

tell_object(ob,HIC""+(face?bandit->query("old_name"):"����")+"������һЩ���������Ĺ���, �㷢�����ۿ��ˡ�\n"NOR);
                        tell_object(bandit,HIC"�����"+ob->name()+"һ������Ĺ���\n"NOR);
                        tell_object(ob,HIY""+(face?bandit->query("old_name"):"����")+"������΢Ц�����߽���ҪС�ĵ�, ��������\n"NOR);
tell_object(bandit,HIY"�����"+ob->name()+"΢Ц: ���߽���ҪС�ĵ�\n"NOR);
                }
        } else {
                if( bandit->can_afford(money) ) {
tell_object(ob,"����˵�����ֵ���,��˿��û������ȥ,ֻ���ź��е��빫��Ǯ,��������Ĵ�а��,���˿������е�Ǯ��\n");
tell_object(bandit,"��˵�����ֵ���,"+ob->name()+"˿��û������ȥ,ֻ��������빫��Ǯ,����"+ob->name()+"���Ĵ�а��,�������Ǯ��\n");
                        bandit->pay_money(money);
                        ob->pay_player(money);
tell_object(ob,HIY""+bandit->query("old_name")+"ʩ���˵�Ǯ���㡣\n"NOR);

tell_object(bandit,HIY"��ʩ����"+ob->name()+"һЩǮ��\n"NOR);
                } else {
tell_object(ob,"����˵�����ֵ���,��˿��û������ȥ,ֻ���ź��е��빫��Ǯ,��������Ĵ�а��,���˿������е�Ǯ��\n");
tell_object(bandit,"��˵�����ֵ���,"+ob->name()+"˿��û������ȥ,ֻ��������빫��Ǯ,����"+ob->name()+"���Ĵ�а��,�������Ǯ��\n");
                        kee = bandit->query("eff_kee")*3/4;
                        bandit->set("eff_kee", kee);
                        tell_object(ob,HIC"�㽫"+bandit->query("old_name")+"��Ǯ�ݺݵ�ȫ�ù⡣\n"NOR);
                        tell_object(bandit,HIC""+ob->name()+"�����Ǯ�ù��ˡ�\n"NOR);
                }
                tell_object(ob,HIC"�����쳤Ц˵��"+bandit->query("old_name")+"���㵹ù,��������Ү�ղ��ŷ�\n"NOR);
                tell_object(bandit,HIC""+ob->name()+"���쳤Ц��˵��"+bandit->query("old_name")+"���㵹ù, ��������Ү�ղ��ŷ����, �۹���������������..\n"NOR);
        }

        ob->delete_temp("��׼��");
        ob->set_temp("������", 1);
}

int help(object me)
{
        write(@HELP

ָ���ʽ�� cmd donate [cancel]

˵������ָ��������͵ض�·��ļǮ
      �Լ������ƶ���
      ���� cancel ������ֹͣļ�衣

HELP);
        return 1;
}
