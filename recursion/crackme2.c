void main(int ac,char **av,char **envp)

{
  int iVar1;
  size_t len;
  long in_FS_OFFSET;
  char **envp_ptr;
  int i;
  char *password_env;
  MD5_CTX md5;
  byte final_password [16];
  char string [40];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 40);
  string[0] = '\0';
  string[1] = '\0';
  string[2] = '\0';
  string[3] = '\0';
  string[4] = '\0';
  string[5] = '\0';
  string[6] = '\0';
  string[7] = '\0';
  string[8] = '\0';
  string[9] = '\0';
  string[10] = '\0';
  string[0xb] = '\0';
  string[0xc] = '\0';
  string[0xd] = '\0';
  string[0xe] = '\0';
  string[0xf] = '\0';
  string[0x10] = '\0';
  string[0x11] = '\0';
  string[0x12] = '\0';
  string[0x13] = '\0';
  string[0x14] = '\0';
  string[0x15] = '\0';
  string[0x16] = '\0';
  string[0x17] = '\0';
  string[0x18] = '\0';
  string[0x19] = '\0';
  string[0x1a] = '\0';
  string[0x1b] = '\0';
  string[0x1c] = '\0';
  string[0x1d] = '\0';
  string[0x1e] = '\0';
  string[0x1f] = '\0';
  string[0x20] = 0;
  password_env = (char *)0x0;
  envp_ptr = envp;
  if (ac == 1) {
    for (; *envp_ptr != (char *)0x0; envp_ptr = envp_ptr + 1) {
      iVar1 = strncmp(*envp_ptr,"jennieandjayloveasm=",20);
      if (iVar1 == 0) {
        password_env = *envp_ptr;
        break;
      }
    }
    if (password_env == (char *)0x0) {
      puts("Access Denied");
    }
    else {
      MD5_Init(&md5);
      len = strlen(password_env + 20);
      MD5_Update(&md5,password_env + 20,len);
      MD5_Final(final_password,&md5);
      for (i = 0; i < 16; i = i + 1) {
        sprintf(string + i * 2,"%02x",(uint)final_password[i]);
      }
      string[0x20] = 0;
      iVar1 = strcmp("e99a18c428cb38d5f260853678922e03",string);
      if (iVar1 == 0) {
        puts("Access Granted");
      }
      else {
        puts("Access Denied");
      }
    }
  }
  else {
    puts("Access Denied");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 40)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}
