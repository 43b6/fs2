// consult.c
// by airke 1998


#include <spell_from.h>
#include <spell_level.h>
#include <spell_basic.h>
#include <skill.h>

string *reject_msg = ({
  "˵������̫�����ˣ�����ô�ҵ���\n",
  "�����ܳ�����һ����˵������̣�����ô�ҵ���\n",
  "Ц��˵��������Ц�ˣ��������С�������ʸ�ָ�㡱��ʲô��\n",
});

varargs int main(object me, string arg)
{
  string spell, teacher,sp_from;
 
  object ob;

  seteuid(getuid());
  

  if(!arg || sscanf(lower_case(arg), "%s from %s", spell, teacher)!=2 )
    return notify_fail("ָ���ʽ��consult <����> from <ĳ��>\n");

  if (spell=="hellfire") return notify_fail("���������������ѧ�");

  if( me->query("spells/"+spell+"/level") )
    return notify_fail("����ͻ�������ˣ�������ѧ��\n");
  
  if( me->is_fighting() )
    return notify_fail("����ĥǹ������������\n");

  if( !(ob = present(teacher, environment(me))) || !ob->is_character())
    return notify_fail("��Ҫ��˭��̣�\n");
  
  if( !living(ob) )
    return notify_fail("��....����Ȱ�" + ob->name() + "Ū����˵��\n");
  
  if(wizardp(ob))
    return notify_fail("���ܸ���ʦѧ������\n");
  
  if ( !ob->query("spells/"+spell+"/level") )
    return notify_fail("�Է����������������spells <����> �鿴��\n");
  
  if ( !spell_from[spell] )
    return notify_fail("û�����ַ���!!\n");

    if ( !me->is_apprentice_of(ob) ) {
      if ((string)me->query("family/family_name") !=
	  (string)ob->query("family/family_name") ||
	  (int)ob->query("family/privs") != -1)
      {
        if(me->query("class") != ob->query("class") ||
 	  !me->query("class") || !ob->query("class") )
        {
          notify_fail( ob ->name() + reject_msg[random(sizeof(reject_msg))] );
          if( !(ob->recognize_apprentice(me)) ) return 0;
        }
      }
    }
    else {
      if( me->query("class") != ob->query("class") ||
         !me->query("class") || !ob->query("class") )
      {
  	return notify_fail(ob->query("name")+"˵��\n"+
 		 "������ǲ�ͬ��ְҵ��ˡ�Ҳ��ܽ��㡣\n");
      }
    }
    if (!ob->query("guild_master") && !me->is_apprentice_of(ob) && 
      !(ob->query("env/����/all/all") || ob->query("env/����/all/"+spell) ||
       ob->query("env/����/"+me->query("id")+"/all") || 
       ob->query("env/����/"+me->query("id")+"/"+spell)))
    return notify_fail("�Է�����������������������\n");

  
  sp_from = spell_from[spell];
  if ( me->query_skill(spell_basic[sp_from]) < spell_level[spell] )
    return notify_fail(ob->query("name")+"˵��: ���"+to_chinese(sp_from)+"֪ʶ���Ӳ��㣬�޷����˷��������ڡ�\n");
  if (userp(ob))
    tell_object(ob, sprintf("%s��������йء�%s���ļ��ɡ�\n",
    	me->name(), to_chinese(spell)));
  printf("����%s��̡�%s���ļ��ɡ�\n", ob->name(), to_chinese(spell));
  printf("\n����%sһ����˵��\n�����������ˡ�%s��ʩ������!!\n", ob->name(),to_chinese(spell));
        
  me->set("spells/"+spell+"/level",1);
    
   
  return 1;
}

int help(object me)
{
        write(@HELP
ָ���ʽ : consult <����> from <ĳ��>
ָ��˵�� :
           ���ָ������������������й�ĳһ�ַ�����ʩ������
     �����ѶԷ������൱�˽�������ԣ����ָ�����ǽ�����ѧ�ķ�
     ��֪ʶ������ʵ�ʻ��ĵ�ָ�͸������ʦ������̣��㽫ѧ��
     ������ʹ�ã�������ֻ��ֽ��̸�����ѡ�      
         
           �������֪�����ܴӶԷ�ѧ��ʲô���ܣ�����Է�����
     ��ʦ���������� spells ָ��ֱ�Ӳ鿴������������ʦ����
     ��ôͨ��������������ʾ����ֻ���Լ���취��
�����ο� :
           practice��study��learn��cast��conjure
HELP );
        return 1;
}
