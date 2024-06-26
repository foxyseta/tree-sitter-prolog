c. % Hello!
% <- constant
       % <- comment
{
% <- punctuation.bracket
  [
  % <- punctuation.bracket
    {
    % <- punctuation.bracket
      true,
      % <- boolean
      %   ^ operator
      4,
      % <- number
       %<- operator
      cat,
      % <- constant
      %  ^ operator
      -0.5e-2,
      % <- number.float
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

function(a,c,a,b,c).
% <- function.call
%       ^ punctuation.bracket
%        ^ constant
%         ^ punctuation.delimiter
%                 ^ punctuation.bracket
%                  ^ punctuation.delimiter
