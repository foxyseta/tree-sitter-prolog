0.2::c. % Hello!
% <- attribute
%    ^ constant
        % <- comment
{
% <- punctuation.bracket
  [
  % <- punctuation.bracket
    {
    % <- punctuation.bracket
      true,
      % <- constant
      %   ^ operator
      4,
      % <- number
       %<- operator
      cat,
      % <- constant
      %  ^ operator
      -0.5e-2,
      % <- number
      %      ^ operator
      log
      % <- constant
    }
    % <- punctuation.bracket
  ]
  % <- punctuation.bracket
}. /* Hi
         there! */
      % ^ comment

0.6::function(a,c,a,b,c).
% <- attribute
%    ^ function
%            ^ punctuation.bracket
%             ^ constant
%              ^ punctuation.delimiter
%                      ^ punctuation.bracket
%                       ^ punctuation.delimiter
