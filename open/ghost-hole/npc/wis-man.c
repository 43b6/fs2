#include <ansi.h>
inherit NPC;
string ask_use();
string ask_water();
void create ()
{
        set_name("����",({"old man","man","old"}) );
        set("gender","����");
        set("title",YEL"��ڤ��"NOR);
        set("nickname",HIW"�ǻ�֮��"NOR);
        set("age",74);
        set("long","����С������ڤ����, ������ڤ����������鶼ʮ���˽�, �������ڤ�����κε�����
, �������������...\n");
        set("inquiry",([
        "��ڤ��":"��ڤ��󲿷ֵ����鶼Χ���������ħ��������פ��ڤ��",
        "�����ħ":"�����ƹ�����ڤ���ħ��, ����������Ϊ, ������ڤ���ħ�������
����ʮ�ֵĲ�����!!",
        "����":"������ħ��, Ҳϣ�������˼�һ���õĴ�����, ħ����Ҳ��һ�����ﰡ!!", 
        "��Ϊ":"���˲б�����֮��, �Ҳ�֪������ô��������..",
        "�б�����":"...�Ҳ����������,�㲻���һ��������...",
        "����":"...�Ҳ����������,�㲻���һ��������...",
        "������":"���������ħ��ϲ���ĳ���, ��˵��ǰ���겻����,����...��֪������
������ڤ��������!!",
        "��ڤ��":"����������ڤ����ͬ�ƹ�ڤ��ġ�������������Ȩ!!",
        "ڤ��":"������ǰ�������ħ���, ������������ħ������ڤ��, ����Ϊ�����ħ
��������, �ֱ���Ϊ��ڤ������ڤ��!",
        "��ڤ��":"����������ڤ����ͬ�ƹ�ڤ��ġ�������������Ȩ!!",
        "����֮ˮ":(: ask_water :),
        "����":"����������, ����������, �����������֮ˮ��������",
        "ʹ��":(: ask_use :),
        "use":(: ask_use :),
        ]));
        set("chat_chance",1);
        set("chat_msg",({
        "��������̩Ȼ�ĵ����л���, �·���˼����������ڤ�������...\n",
        "����ͻȻ̾��һ����...\n",
        "��������Źֵ�˵��һЩ���������û�, �ƺ�ʮ������!!\n",
        "����¶�������΢Ц, �Ե�ʮ�ֵ�����...\n",
        "���˼�����˵��: ������ڤ����ʲô�����þ������Ұ�, ��������������
�Ը������ħ��!!\n",
        "��������������������ʾ��ʲô:����������������ҵ�ͨ�������ħ������
�ص�, ����...!!\n",
        }));
        setup();
}
string ask_water()
{
object me=this_player();
object mob=this_object();
if(me->query_temp("ghost-hole/wis-man/know-living-water"))
return "���Ѿ�������֮ˮ�����˰�!!\n";
me->set_temp("ghost-hole/wis-man/do_ask_water",1);
return HIY"��������֮ˮ��??������������������ı�Ҫ��!!��֪�����ʹ��(use)��??"NOR;
}


string ask_use()
{
object me;
me=this_player();
if(!me->query_temp("ghost-hole/wis-man/do_ask_water"))
return "������ʲô��??��������....\n";
return "���Ȱ�����֮ˮ���ҿ���!!\n";
}

int accept_object(object me,object ob)
{
object ob2;
me=this_player();
ob2=new("/data/autoload/mogi/sspill");
if(ob->query("id")!="living-water")
{
message_vision(HIY"������ʮ�ֲ�м���۹⿴��$N����"+ob->query("name")+", ���ž�������, �л�һ���ڶ�
, ��"+ob->query("name")+"�����˽�ȥ!!\n"NOR,me);
return 1;
}
if(!me->query_temp("ghost-hole/wis-man/do_ask_water"))
{
message_vision(HIY"������ʮ�ֲ�м���۹⿴��$N����"+ob->query("name")+",
���˻���˵��: �������ֶ���������ʲô??
�����л�һ���ڶ�, ��"+ob->query("name")+"�����˽�ȥ!!\n"NOR,me);
return 1;
}
if(me->query_temp("ghost-hole/wis-man/know-living-water"))
{
message_vision(HIY"���˸��˵�Ц��:û�뵽$N�������˹��صĶ���, ����̫�м�$N��!!\n"NOR,me);
message_vision(HIY"�����漴ת����ȥ, ���䱳������������ó���һЩҩ��\n"NOR,me);
message_vision(HIR"���˸���$NһЩ��ɫҩ��!!\n"NOR,me);
message_vision(HIY"����Ц��˵:��Щҩ��ܺ��õ�, �͵��������������֮ˮ��л���!!\n"NOR,me);
ob2->set_amount(5);
ob2->move(me);
return 1;
}
message_vision(HIY"�������������Ц��:ԭ������֮ˮ�ǳ������ģ����!!
		����!!лл����!!��..����֮ˮ������, 
		�������������֮ˮ��\��\(cover butterfly)����������, ��������
		�ͻḴ����!!\n"NOR,me);
message_vision(HIW"���˰�����֮ˮ������$N \n"NOR,me);
me->set_temp("ghost-hole/wis-man/know-living-water",1);
ob->move(me);
return 1;
}
