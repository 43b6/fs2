// cast.c
//fix by airke

#include <skill.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	string spell, spl, trg, str;
	int number=1;
	object target;
 
	seteuid(getuid());
    if(me->is_busy())
    return notify_fail("��һʱ�޷��ۼ�������\n");
  if(me->query("mana") < 0) {
  me->set("mana",0);
tell_object(me,"û��������ʲѽ?\n"); 
return 1;
  }
	if( environment(me)->query("no_fight") )
		return notify_fail("���ﲻ׼ս����\n");

	if( environment(me)->query("no_magic") )
		return notify_fail("���ﲻ׼�����ġ�\n");

	if( !arg )
		return notify_fail("ָ���ʽ��cast <����> [on <Ŀ��>]\n");
	if( sscanf(arg, "%s on %s", spl, trg)==2 ) {
		target = present(trg, environment(me));
		if( !target ) target = present(trg, me);
		if( !target ) return notify_fail("����û�� " + trg + "��\n");
	if( !living(target) ) return notify_fail("���������\n");
	        
        } 
// �ٻ���ר�ø�ʽ--------------- by airke
	else if( sscanf(arg, "%d %s invocation", number, str)==2 
		 || sscanf(arg, "%s invocation",str)==1) {
	       if(stringp(spell = me->query_skill_mapped("spells")) )
		 return (int)SKILL_D(spell)->cast_invocation(me, number, str);
	       return notify_fail("�������� enable ָ��ѡ����Ҫʹ�õ�����ϵ��\n");
	}
//------------------------------
        else {
		spl = arg;
	if( !target = "/std/sserver"->offensive_target(me) )
			return notify_fail("��û�ж�����������\n");
              
	}
	
	spl = replace_string( spl, " ", "_");
	
	if(stringp(spell = me->query_skill_mapped("spells")) )
		return (int)SKILL_D(spell)->cast_spells(me, spl, target, number);
	
		
	return notify_fail("�������� enable ָ��ѡ����Ҫʹ�õ�����ϵ��\n");
}

int help (object me)
{
        write(@HELP
ָ���ʽ : cast <��������> [on <ʩ�����>]
ָ��˵�� :
           ʹ�ñ�����ʩ�ŷ����������Ҫָ�� <��������>��<ʩ�����>��
         ���п��ޡ�
           ����ʹ��ĳһ������֮ǰ����������� enable  ָ����ָ����Ҫ
         ʹ�õ�����ϵ��
�ر�ע�� :
           �����ı��Լ�������ϵ����ԭ������ķ���������ֱ��ת����ȥ��
         ����� 0 ��ʼ��
HELP
        );
        return 1;
}
