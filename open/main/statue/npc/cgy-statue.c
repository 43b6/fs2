inherit NPC;
#include <ansi.h>
string adv_title();
void create()
{
	set_name("�������ĵ���",({"cgy statue","cgy"}));
	set("long","����֮�񡣿�������Ϊ����հ�������������ĵ��У������ر����˴�һ����\n���������(pray id)Ҳ���������Ч���!!\nexp��һǧ���߿����������ڳƺŵ����");
	set("title",HIR"��ħ����"NOR);
	set("nickname",HIW"��"HIG"��"HIC"��"HIY"��"NOR);
	set("unit","��");
	set("age",291);
	set("value",100);
	set("no_get",1);
	set("no_kill",1);
	set("no_fight",1);
	set("no_sac",1);
	set("no_auc",1);
	set("env/can_tell_wiz","YES");
	set("no_reset",1);
	set_weight(500000);
	setup();
	  set("inquiry", ([
            "�ƺ�"  : (:adv_title:),
			]));
}

init()
{
	add_action("do_pray","pray");
}

int do_pray(string arg)
{
	object me=this_player();

	call_out("greeting",2,me,arg);
	message_vision(HIW"һ���â����$N"HIW"��ȫ����â�����ѽ�$N"HIW"�������͵�����Ķ��ߡ�\n"NOR,me);

	return 1;
}

void greeting(object ob,string arg)
{
	object me;
	me=this_player();
	command("tell "+arg+" "+me->query("name")+"("+me->query("id")+")����һ��ף����������!!\n ");

}
string adv_title()
{
object me=this_player();
int i,j,k;
i=random(6);
j=random(3);
k=random(3);
		
        if(me->query("combat_exp") < 10000000 )
                return "��ľ���ֵ����, ���ĥ�����������Ұ�...";
        if(me->query("class")=="fighter")
		{
		if(i==0){
                me->set("title",HIY"��"HIG"��������"HIY"��"HIM"����"HIY"��"HIC"����"NOR) ;
				message("system",HIY"������"HIW"����˵��:"HIY+this_player()->name()+HIM"�����г��ش���"HIY"��"HIG"��������"HIY"��"HIM"����"HIY"��"HIC"����"NOR"�ƺ�\n"NOR,users());
                } 
		else if(i==1){
                me->set("title",HIG"ȭ��"HIY"˫��"HIW"��"HIC"Ц����"NOR) ;
				message("system",HIY"������"HIW"����˵��:"HIY+this_player()->name()+HIM"�����г��ش���"HIG"ȭ��"HIY"˫��"HIW"��"HIC"Ц����"NOR"�ƺ�\n"NOR,users());;
                }
		else if(i==2){
                me->set("title",HIY"��������"HIB"��"HIG"�� �� ��"HIB"��"NOR) ;
				message("system",HIY"������"HIW"����˵��:"HIY+this_player()->name()+HIM"�����г��ش���"HIY"��������"HIB"��"HIG"�� �� ��"HIB"��"NOR"�ƺ�\n"NOR,users());;
                }
		else if(i==3){
                me->set("title",HIY"��������"HIB"��"HIM"�� �� ��"HIB"��"NOR) ;
				message("system",HIY"������"HIW"����˵��:"HIY+this_player()->name()+HIM"�����г��ش���"HIY"��������"HIB"��"HIM"�� �� ��"HIB"��"NOR"�ƺ�\n"NOR,users());;
                }
		else if(i==4){
                me->set("title",HIY"��������"HIB"��"HIC"�� �� ��"HIB"��"NOR) ;
				message("system",HIY"������"HIW"����˵��:"HIY+this_player()->name()+HIM"�����г��ش���"HIY"��������"HIB"��"HIC"�� �� ��"HIB"��"NOR"�ƺ�\n"NOR,users());;
                }
		else{
		me->set("title",HIB"��"HIC"���"HIY"�B"HIR"����"HIB"��"NOR) ;
				message("system",HIG"½�������˵��:��ϲ"HIY+this_player()->name()+HIM"��Ϊ"HIB"��"HIC"���"HIY"�B"HIR"����"HIB"��"NOR"�ƺ�\n"NOR,users());
                }
		return "��ϲ������µĳƺ�";
		}
		if(me->query("class")=="prayer")
		{
		if(j==0){
                me->set("title",HIG"��"RED"ĩ��"HIY"ʥʹ"HIG"��"NOR) ;
				message("system",HIY"������"HIW"����˵��:"HIY+this_player()->name()+HIM"�����г��ش���"HIG"��"RED"ĩ��"HIY"ʥʹ"HIG"��"NOR"�ƺ�\n"NOR,users());
                } 
		else if(j==1){
                me->set("title",HIG"��"HIM"���"YEL"�ۻ�"HIG"��"NOR) ;
				message("system",HIY"������"HIW"����˵��:"HIY+this_player()->name()+HIM"�����г��ش���"HIG"��"HIM"���"YEL"�ۻ�"HIG"��"NOR"�ƺ�\n"NOR,users());
                }
		else {
		        me->set("title",HIG"��"HIR"ʥ��"HIC"���"HIG"��"NOR) ;
				message("system",HIY"������"HIW"����˵��:"HIY+this_player()->name()+HIM"�����г��ش���"HIG"��"HIR"ʥ��"HIC"���"HIG"��"NOR"�ƺ�\n"NOR,users());
                }
		return "��ϲ������µĳƺ�";
		}
		if(me->query("class")=="blademan")
		{
		if(k==0){
                me->set("title",HIB"��"HIM"ħ�����"HIB"��"HIR"����"HIW"�B"HIC"����"NOR) ;
				message("system",HIY"������"HIW"����˵��:"HIY+this_player()->name()+HIM"�����г��ش���"HIB"��"HIM"ħ�����"HIB"��"HIR"����"HIW"�B"HIC"����"NOR"�ƺ�\n"NOR,users());
                } 
		else if(k==1){
                me->set("title",HIR"����"HIG"��"HIY"ŭ"HIB"�B"HIM"ն"HIB"�B"HIC"ɱ"NOR) ;
				message("system",HIY"������"HIW"����˵��:"HIY+this_player()->name()+HIM"�����г��ش���"HIR"����"HIG"��"HIY"ŭ"HIB"�B"HIM"ն"HIB"�B"HIC"ɱ"NOR"�ƺ�\n"NOR,users());
                }
		else {
		        me->set("title",HIM"��"HIC"һ������"HIM"��"HIY"ŭɱǧ��"NOR) ;
				message("system",HIY"������"HIW"����˵��:"HIY+this_player()->name()+HIM"�����г��ش���"HIM"��"HIC"һ������"HIM"��"HIY"ŭɱǧ��"NOR"�ƺ�\n"NOR,users());
                }
		me->set("get-new-title",1);
		return "��ϲ������µĳƺ�";
		}
		if(me->query("class")=="killer")
		{
		if(k==0){
                me->set("title",HIB"������"HIR"��"HIY"��"HIG"ɱ"HIC"��"NOR) ;
				message("system",HIY"������"HIW"����˵��:"HIY+this_player()->name()+HIM"�����г��ش���"HIB"������"HIR"��"HIY"��"HIG"ɱ"HIC"��"NOR"�ƺ�\n"NOR,users());
                } 
		else if(k==1){
                me->set("title",HIB"������"CYN"�ڽ�"HIW"ʹ��"NOR) ;
				message("system",HIY"������"HIW"����˵��:"HIY+this_player()->name()+HIM"�����г��ش���"HIB"������"CYN"�ڽ�"HIW"ʹ��"NOR"�ƺ�\n"NOR,users());
                }
		else {
		        me->set("title",HIR"��"HIY"��"HIG"ɱ"HIC"��"NOR) ;
				message("system",HIY"������"HIW"����˵��:"HIY+this_player()->name()+HIM"�����г��ش���"HIR"��"HIY"��"HIG"ɱ"HIC"��"NOR"�ƺ�\n"NOR,users());
                }
		me->set("get-new-title",1);
		return "��ϲ������µĳƺ�";
		}

  if(!me->query("get-new-title")&&me->query("class")=="swordsman")


     {
  if(k==0){
    me->set("title",HIB"��"HIM"������"HIB"��"NOR);
    message("system",HIY"������"HIW"����˵��:"HIY+this_player()->name()+HIM"�����г��ش��轣��"HIB"��"HIM"������"HIB"��"NOR"�ƺ�\n"NOR,users());
          }
  else if(k==1){
    me->set("title",HIR"��"HIY"��"HIB"��"HIM"��"HIB"��"HIR"��"NOR) ;
    message("system",HIY"������"HIW"����˵��:"HIY+this_player()->name()+HIM"�����г��ش���"HIR"��"HIY"��"HIB"��"HIM"��"HIB"��"HIR"��"NOR"�ƺ�\n"NOR,users());

          }
  else {
    me->set("title",HIM"��"HIC"��������"HIM"��"HIY"ܺ�����"NOR) ;
    message("system",HIY"������"HIW"����˵��:"HIY+this_player()->name()+HIM"�����г��ش���"HIM"��"HIC"��������"HIM"��"HIY"ܺ�����"NOR"�ƺ�\n"NOR,users());
       }
       me->set("get-new-title",1);
       return "��ϲ������µĳƺ�";
     }
}
