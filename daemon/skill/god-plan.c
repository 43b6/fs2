// security.c

inherit SKILL;

int valid_enable(string usage) { return usage=="plan"; }

int valid_learn(object me) { return 1; }

int practice_skill(object me)
{
   return notify_fail("�������ֻ����ѧ�ġ�\n");
}


string perform_action_file( string action )
{
if( this_player()->query("race") !="����" )


   {
      tell_object( this_player(), "�㲻������,��ô���������???\n");
      action= "null_plan";
   }
   return CLASS_D("scholar") + "/god-plan/" + action;
}

