% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/generateParams.R
\name{smart_covmat}
\alias{smart_covmat}
\title{Create random VAR model \eqn{(dxd)} error term covariance matrix \eqn{\Omega}
  fairly close to the given \strong{positive definite} covariance matrix using (scaled)
  Wishart distribution}
\usage{
smart_covmat(d, Omega, accuracy)
}
\arguments{
\item{Omega}{a symmetric positive definite \eqn{(dxd)} covariance matrix specifying
expected value of the matrix to be generated.}

\item{accuracy}{a positive real number adjusting how close to the given covariance matrix
  the returned individual should be.

  The standard deviation of each diagonal element is...
  \itemize{
    \item \eqn{\omega_{i,i}/}\code{accuracy} when \code{accuracy > d/2}
    \item and \code{sqrt(2/d)*}\eqn{\omega_{i,i}} when \code{accuracy <= d/2}.
  }
  Wishart distribution is used for reduced form models, but for more details read the source code.}
}
\value{
Returns a \eqn{(d(d+1)/2x1)} vector containing vech-vectorized covariance matrix
      \eqn{\Omega}.
}
\description{
\code{smart_covmat} generates random VAR model \eqn{(dxd)} error term covariance matrix \eqn{\Omega}
  from (scaled) Wishart distribution that is fairly close to the given matrix.
}
\keyword{internal}
